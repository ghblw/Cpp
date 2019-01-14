/*************************************************************************
	> File Name: 2.new.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 18时08分32秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    /*
    type *name = new type;//申请
    delete name;//收回（一般在析构函数）
    
    type *name = new type(value);
    delete name;
    
    type *name = new type[length];
    delete[] name;
    */
    int *p = new int(100);
    cout << *p << endl;
    int *p1 = new int[10];
    for (int i = 0; i < 10; i++) {
        p1[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ":" << p1[i] << endl;
    }
    delete p;
    delete p1;
    return 0;
}
