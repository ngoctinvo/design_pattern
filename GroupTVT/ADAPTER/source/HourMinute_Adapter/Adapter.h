#ifndef Adapter_h
#define Adapter_h
#include "Interface.h"

class Time_HM_adapter : public Hour_Count    //ADAPTER
{
private:
    Counter Cnt;
    float time;

public:
    Time_HM_adapter(Counter count);  // Xử lý trích xuất ra thông tin mà phía Back-end mong muốn

    void setTime(float time_);

    float getTime();
};
#endif