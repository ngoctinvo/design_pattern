#include"Adapter.h"

int main()
{
    // Tạo đối tượng người dùng
    Counter cnt;
    cnt.setHour(3);
    cnt.setMinute(30);

    
    cout << "Time show for user:\n";
    cout << "Hour: " << cnt.getHour() << endl;
    cout << "Minute: " << cnt.getMinute() << endl;
    // Tạo adapter để backend hoạt động với adapter này 
    Time_HM_adapter adapter(cnt);
    cout << "Time the back_end get: \n";
    cout << "Time: " << adapter.getTime() << endl;
        
    return 0;
}