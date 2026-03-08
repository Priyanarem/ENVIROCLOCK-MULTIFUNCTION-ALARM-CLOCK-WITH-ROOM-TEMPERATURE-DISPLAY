#ifndef LCD_H
#define LCD_H

void lcd_init(void);
void lcd_cmd(unsigned char cmd);
void lcd_data(unsigned char data);
void lcd_print(char *str);
void lcd_clear(void);
void lcd_goto(int row,int col);

#endif
