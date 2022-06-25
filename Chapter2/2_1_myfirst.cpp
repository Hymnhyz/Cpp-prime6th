// myfirst.cpp--显示一条消息

#include <iostream>                           // #include ：预处理编译指令
int main()                                    // 函数头
{                                             // 函数体开始
    using namespace std;                      // 使定义可见
    cout << "Come up and C++ me some time.";  // message
    cout << endl;                             // 换行
    cout << "You won't regret it!" << endl;   // 更多输出
    // If the output window closes before you can read it,
    // add the following code:
    // cout << "Press any key to continue." <<endl;
	// cin.get();                                                   
    return 0;                                 // 终止 main()，在main函数中可以省略
}                                             // 函数体结束