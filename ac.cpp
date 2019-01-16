/*************************************************************************
	> File Name: ac.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月15日 星期二 11时35分38秒
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
    public:
    Test() {
        //a = 10;
        cout << "Test() " << a << endl;
    }
    Test(int value) {
        a = value;
        cout << "Test(int)" << a << endl;
    }
    int getA() {
        return a;
    }
};
Test t1;
int main() {
    Test t(1);
    Test t2 = 100;
    Test t3;
}
