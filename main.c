#include <lpc214x.h>
#include "lcd.h"
#include "rtc.h"
#include "adc_lm35.h"
#include "keypad.h"
#include "alarm.h"
#include "buzzer.h"
#include "delay.h"

int main()
{
    int temp;
    rtc_time_t current;

    lcd_init();
    rtc_init();
    adc_init();
    keypad_init();
    buzzer_init();

    lcd_print("EnviroClock");
    delay_ms(2000);
    lcd_clear();

    while(1)
    {
        rtc_get_time(&current);

        lcd_goto(0,0);
        lcd_printf("Time %02d:%02d:%02d", 
                    current.hour,
                    current.min,
                    current.sec);

        temp = read_temperature();

        lcd_goto(1,0);
        lcd_printf("Temp %d C", temp);

        check_alarm(current);

        delay_ms(500);
    }
}
