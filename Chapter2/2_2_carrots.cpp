// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;            // 声明一个整数变量，定义声明
    
    carrots = 25;            // 赋一个值给这个变量
    cout << "I have ";
    cout << carrots;        // display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // modify the variable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    // cin.get();
	return 0;
}
