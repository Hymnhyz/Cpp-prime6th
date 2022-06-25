// myfirst.cpp--显示一条消息

#include <iostream>                           // 一个预处理指令
int main()                                    // function header
{                                             // start of function body
    using namespace std;                      // 使定义可见
    cout << "Come up and C++ me some time.";  // message
    cout << endl;                             // 换行
    cout << "You won't regret it!" << endl;   // 更多输出
    // If the output window closes before you can read it,
    // add the following code:
    // cout << "Press any key to continue." <<endl;
	// cin.get();                                                   
    return 0;                                 // 终止 main()
}                                             // end of function body