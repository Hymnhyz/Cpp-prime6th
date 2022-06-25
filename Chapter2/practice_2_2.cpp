// 题： 编写一个C++程序，它要求用户输入一个以 long 为单位的距离， 然后将它转换为码（yard，一long 等于 220 码）。

#include <iostream>

int main() 
{
    using namespace std;

    float distance=0, yard;
    cout << "Please input a distance numebr in the unit of Long: ";
    cin  >> distance;
    yard = distance * 220;

    cout << "The distance tranform in yards is: " << yard << endl;

    return 0;
}
