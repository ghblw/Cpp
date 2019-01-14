/*************************************************************************
	> File Name: 5.zuoyongyu.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月10日 星期四 19时03分30秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class A{
    public:
    int i;
    public:
    A(int v = 0) {
        i = v;
    }
    int add() {
        return i + 1;
    }
    int add(int a, int b, int c) {
        return i + a + b + c;
    }
    int get() {
        cout << "A:: i = " << i << endl;
        return i;
    }
    void say() {
        cout << "hello I'm a" << endl;
    }
};
class B:public A{
    public:
    int i;
    public:
    B(int v): A(0) {
        i = v;
    }
    int add(int a) {
        return i + a;
    }
    /*
    int add(int a, int b) {
        return a + b + i;
    }
    int get() {
        cout << "B::i = " << i << endl;
        return i;
    }*/
    void say() {
        cout << "hello I'm b" << endl;
    }
};

//父子兼容
//如果不用虚函数
//编译器根据指针判断，解释为父亲版本是最安全的
void how_to_say(A *p) {
    p->say();
    return ;
}

int main() {
    A a(100);
    B b(3);
    cout << b.i << endl;//优先使用子类的属性
    cout << b.A::i << endl;
    //cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << b.A::add() << endl;
    cout << b.A::add(1, 2, 3) << endl;
    cout << b.get() << endl;
    how_to_say(&a);
    how_to_say(&b);
}
