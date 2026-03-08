#ifndef RTC_H
#define RTC_H

typedef struct
{
    int hour;
    int min;
    int sec;
} rtc_time_t;

void rtc_init(void);
void rtc_get_time(rtc_time_t *t);

#endif
