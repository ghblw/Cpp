/*************************************************************************
	> File Name: 5.fangwen.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月10日 星期四 18时05分34秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent {
    private:
    int a;
    public:
    int b;
    void set(int v1, int v2, int v3) {
        a = v1;
        b = v2;
        c = v3;
    }
    protected:
    int c;

};
class Child1 : public Parent {
    public:
    void print() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class Child2 : private Parent {
    public:
    void print() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
class Child3 : protected Parent {   
};

int main() {
    
    return 0;
}
