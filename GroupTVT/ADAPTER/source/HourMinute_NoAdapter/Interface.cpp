#include "Interface.h"

Counter::Counter()
{
    Hour = 0;
    Minute = 0;
}

void Counter::setTime(float Time)
{
    Hour = int(Time);
    Minute = (int)(Time - int(Time)) * 60;
}

float Counter::getTime()
{
    return Hour + 1.0 * Minute / 60;
}

void Counter::setHour(int H)
{
    Hour = H;
}

void Counter::setMinute(int M)
{
    Minute = M;
}

int Counter::getHour()
{
    return Hour;
}

int Counter::getMinute()
{
    return Minute;
}