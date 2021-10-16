#include "Adapter.h"

Time_HM_adapter::Time_HM_adapter(Counter count)  // Xử lý trích xuất ra thông tin mà phía Back-end mong muốn
{
    Cnt = count;
    time = Cnt.getHour() + 1.0 * Cnt.getMinute() / 60;
}

void Time_HM_adapter::setTime(float time_)
{
    time = time_;
}

float Time_HM_adapter::getTime()
{
    return time;
}