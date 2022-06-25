// 题： 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
// Enter your age: 29

#include <iostream>

int main() 
{
    using namespace std;

    int years, months;
    cout << "Enter your age: ";
    cin >> years;

    months = years * 12;
    cout << years << " years is " << months << " monthes." << endl;  
    return 0;
}
