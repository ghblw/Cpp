/*************************************************************************
	> File Name: lx.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 02时16分44秒
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
        cout << "Test" << endl;
    }
    ~Test() {
        cout << "~Test" << endl;
    }
};

class B {
    private:
        Test t1;
        Test t2;
    public:
    B() {
        cout << "B" << endl;
    }
    ~B() {
        cout << "~B" << endl;
    }
};

int main() {
    B b;
}
