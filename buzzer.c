#include <lpc214x.h>

#define BUZZ (1<<15)

void buzzer_init()
{
    IO0DIR |= BUZZ;
}

void buzzer_on()
{
    IO0SET = BUZZ;
}

void buzzer_off()
{
    IO0CLR = BUZZ;
}
