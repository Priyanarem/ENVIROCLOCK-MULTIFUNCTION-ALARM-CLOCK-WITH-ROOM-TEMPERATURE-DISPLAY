#include <lpc214x.h>

void adc_init()
{
    AD0CR = (1<<1) | (4<<8) | (1<<21);
}

int read_temperature()
{
    int adc_value;

    AD0CR |= (1<<24);

    while(!(AD0GDR & (1<<31)));

    adc_value = (AD0GDR>>6) & 0x3FF;

    return (adc_value * 330) / 1023;
}
