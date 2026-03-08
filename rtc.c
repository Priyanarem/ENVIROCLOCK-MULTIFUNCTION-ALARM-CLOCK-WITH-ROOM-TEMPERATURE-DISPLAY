#include <lpc214x.h>
#include "rtc.h"

void rtc_init()
{
    CCR = 0x02;
    PREINT = 0x01C8;
    PREFRAC = 0x61C0;
    CCR = 0x01;
}

void rtc_get_time(rtc_time_t *t)
{
    t->hour = HOUR;
    t->min  = MIN;
    t->sec  = SEC;
}
