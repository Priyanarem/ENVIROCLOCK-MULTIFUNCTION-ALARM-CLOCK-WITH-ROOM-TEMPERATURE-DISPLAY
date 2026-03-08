#include <lpc214x.h>
#include "lcd.h"
#include "delay.h"

#define LCD_DATA (IO0PIN)
#define RS (1<<8)
#define EN (1<<9)

void lcd_cmd(unsigned char cmd)
{
    IO0CLR = RS;
    IO0PIN = cmd;
    IO0SET = EN;
    delay_ms(2);
    IO0CLR = EN;
}

void lcd_data(unsigned char data)
{
    IO0SET = RS;
    IO0PIN = data;
    IO0SET = EN;
    delay_ms(2);
    IO0CLR = EN;
}

void lcd_init()
{
    delay_ms(20);
    lcd_cmd(0x38);
    lcd_cmd(0x0C);
    lcd_cmd(0x06);
    lcd_cmd(0x01);
}

void lcd_print(char *str)
{
    while(*str)
        lcd_data(*str++);
}

void lcd_clear()
{
    lcd_cmd(0x01);
}

void lcd_goto(int row,int col)
{
    int pos;

    if(row==0)
        pos = 0x80 + col;
    else
        pos = 0xC0 + col;

    lcd_cmd(pos);
}
