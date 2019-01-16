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

class Parent {
    protected :
    int i;
    public:
    Parent(int v = 0) {
        i = v;
    }
};
class Child : public Parent {
    public:
    Child() : Parent(5) {
        cout << "Child()" << endl;
    }
    int getI() {
        return i;
    }
};

int main() {
    Child c;
    cout << c.getI() << endl;
}
