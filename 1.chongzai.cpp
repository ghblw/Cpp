/*************************************************************************
	> File Name: 1.chongzai.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2018年12月29日 星期六 18时47分43秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace yxw {
    int add(int x, int y = 3) {
        return x + y;
    }
    int add() {
        return 100;
    }
    string add(string &s1, string &s2) {
        return s1 + s2;
    }
}

using namespace yxw;
int (*p1)(int, int);
int (*p2)();
int main() {
    string s1 = "yxw", s2 = "haizei";
    p1 = add;
    p2 = add;
    int c = (*p1)(1, 2);
    int d = (*p2)();
    cout << c << " " << d << endl;
    cout << add() << endl;
    cout << add(0) << endl;
    cout << add(s1, s2) << endl;
    printf("%p %p\n", p1, p2);
}
