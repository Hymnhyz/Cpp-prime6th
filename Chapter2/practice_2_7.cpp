// 题： 编写一个程序，要求用户输入小时数和分钟数。在 main() 函数中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：

// Enter the number of hours: 9
// Enter the number of minutes: 28

// Time: 9:28


#include <iostream>

using namespace std;

void display_time(double, double);

int main() 
{    

    double hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    display_time(hours, minutes);

    return 0;
}

void display_time(double hours, double minutes) 
{
    cout << "Time: " << hours << ":" << minutes << endl;

    return;
}