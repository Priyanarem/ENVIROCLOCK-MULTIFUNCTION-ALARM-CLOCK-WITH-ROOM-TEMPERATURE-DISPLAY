#include "alarm.h"
#include "buzzer.h"

static int alarm_h = 7;
static int alarm_m = 0;

void set_alarm(int h,int m)
{
    alarm_h = h;
    alarm_m = m;
}

void check_alarm(rtc_time_t t)
{
    if(t.hour == alarm_h && t.min == alarm_m && t.sec == 0)
    {
        buzzer_on();
    }
}
