/*************************************************************************
	> File Name: 3.xigou.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月03日 星期四 18时11分18秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Test {
    public:
    Test() {
        cout << "hi" << endl;
    }
    ~Test() {
        cout << "Bye" << endl;
    }
};

int main() {
    Test t;
}
