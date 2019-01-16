/*************************************************************************
	> File Name: 7.jicheng.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 10时25分04秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class A {
    protected:
    int i;
    int j;
    public:
    virtual void print() {
        cout << "hi" << endl;
    }
};
class B : public A {
    private:
    int k;
    public:
    B(int v1, int v2, int v3) : A(v1, v2) {
        k = v3;
    }
    void show() {
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
        cout << "k = " << k << endl;
    }
};

typedef struct C {
    int a;
    int b;
    int c;
} C;

int main() {
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    B b(1,2,3);
    b.show();
    C *p = reinterpret_cast<C*>(&b);
    p->a = 10;
    p->b = 100;
    p->c = 1000;
    b.show();
}
