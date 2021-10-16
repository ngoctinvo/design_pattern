#include"Interface.h"

int main()
{
    //Tạo đối tượng người dùng
    Counter cnt;
    cnt.setHour(3);
    cnt.setMinute(30);

    cout << "Time show for user:\n";
    cout << "Hour: " << cnt.getHour() << endl;
    cout << "Minute: " << cnt.getMinute() << endl;

    cout << "Time the back_end get: \n";  // Sửa code để chúng ta có được chứng năng này
    cout << "Time: " << cnt.getTime() << endl;

    return 0;
}