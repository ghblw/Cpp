/*************************************************************************
	> File Name: 5.gouzao.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月10日 星期四 18时19分52秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent {
    public:
    Parent() {
        cout << "Parent()" << endl;
    }
};
class Child : public Parent {
    public:
    Child() {
        cout << "Child" << endl;
    }
}

int main() {
    Child c;
}
