#ifndef Interface_h
#define Interface_h

#include <iostream>

using namespace std;

class Hour_Count    // INTERFACE MÀ NGƯỜI BẢO TRÌ MONG MUỐN
{
public:
    virtual void setTime(float) = 0;
    virtual float getTime() = 0;
};

class Hour_Minute_Count           // INTERFACE CỦA NGƯỜI DÙNG BAN ĐẦU
{
public:
    virtual void setHour(int H) = 0;
    virtual void setMinute(int M) = 0;
    virtual int getHour() = 0;
    virtual int getMinute() = 0;
};

class Counter : public Hour_Count    // CODER ĐÃ SỬA LẠI CODE NÀY SAO CHO CÓ THỂ THỎA MÃN ĐƯỢC NHU CẦU TỪ 2 PHÍA
{
private:
    int Hour;
    int Minute;
public:
    Counter();

    void setTime(float Time);
    float getTime();

    void setHour(int H);
    void setMinute(int M);

    int getHour();
    int getMinute();
};

#endif