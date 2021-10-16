#ifndef Interface_h
#define Interface_h

#include <iostream>

using namespace std;

class Hour_Minute_Count           // INTERFACE NGƯỜI DÙNG MONG MUỐN (TARGET)
{
public:
    virtual void setHour(int H) = 0;
    virtual void setMinute(int M) = 0;
    virtual int getHour() = 0;
    virtual int getMinute() = 0;
};

class Hour_Count                 // INTERFACE MÀ NGƯỜI BẢO TRÌ PHÒNG MÁY MONG MUỐN (ADAPTEE)   
{
public:
    virtual void setTime(float) = 0;
    virtual float getTime() = 0;
};

class Counter : public Hour_Minute_Count             // CLASS USER DÙNG ĐỂ THỰC THI INTERFACE TARGET
{
private:
    int Hour;
    int Minute;
public:
    Counter();

    void setHour(int H);
    void setMinute(int M);

    int getHour();
    int getMinute();
};
#endif