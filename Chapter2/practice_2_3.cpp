// 题： 编写一个C++程序，它使用 3 个用户定义的函数（包括main()），并生成下面的输出：
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// 其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余的输出。

#include <iostream>

using namespace std;

void blind_mice();
void how_they_run();

int main() 
{
    blind_mice();
    blind_mice();

    how_they_run();
    how_they_run();
    return 0;
}

void blind_mice() 
{
    cout << "Three blind mice." << endl;
    // return;
}

void how_they_run() 
{
    cout << "See how they run" << endl;
    // return;
}
