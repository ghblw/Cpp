/*************************************************************************
	> File Name: 2.copygz.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月02日 星期三 17时17分01秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Test {
    private:
    int a;
    int *p;
    public:
    Test() {
        p = new int(1);
    }
    Test(int value) {
        a = value;
        p = new int(1);
        cout << "Test(int)" << a << endl;
    }
    Test(const Test &obj) {
        a = obj.a;
        p = new int;
        *p = *obj.p;
    }
    int getA() {
        return a;
    }
    int *getP() {
        return p;
    }
    int get() {
        return *p;
    }
    void free() {
        delete p;
    }
};

int main() {
    Test *p = new Test(1);
    Test t3(1);
    Test t5 = t3;
    cout << "t3:"<< t3.getA() << " " << t3.getP() << endl;
    cout << "t5:"<< t5.getA() << " " << t5.getP() << endl;
    t3.free();
    t5.free();
}
