/*************************************************************************
	> File Name: 4.class.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月08日 星期二 18时09分05秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class A {
    int a;
    int b;
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
};
struct B {
    int a;
    int b;
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
};

int main() {
    A aa;
    B bb;
    aa.a = 10;
    aa.b = 100;
    cout << aa.getA() << endl;
    cout << aa.getB() << endl;

    bb.a = 10;
    bb.b = 100;
    cout << bb.getA() << endl
    cout << bb.getB() << endl;
}
