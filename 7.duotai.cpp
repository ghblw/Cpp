/*************************************************************************
	> File Name: 7.duotai.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 09时30分13秒
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
    //所有子类对应的函数都是虚函数
    virtual void say() {
        cout << "I'm Parent" << endl; 
    }
};

class Child : public Parent {
    public:
    //显示声明virtual或者不写都可以
    void say() {
        cout << "I'm Child" << endl;
    }
};

void how_to_say() {
    p->say();
}
//父子兼容性，子类可以当父类
//传父类子类对象都调父类函数，
//父子兼容，子类对象退化成父类对象
//为了安全调用父类的函数
//希望根据对象的不同
//多态：面向对象的概念，不同的对象产生不同行为
//在子类中重写父类函数，传子类对象调子类函数，父类中调父类函数
//关键字:virtual
int main() {
    Parent p;
    Child c;
    how_to_say(&p);
    how_to_say(&c);
}
