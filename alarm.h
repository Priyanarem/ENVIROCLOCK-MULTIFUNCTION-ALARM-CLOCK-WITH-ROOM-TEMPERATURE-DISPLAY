#ifndef ALARM_H
#define ALARM_H

#include "rtc.h"

void set_alarm(int h,int m);
void check_alarm(rtc_time_t t);

#endif
