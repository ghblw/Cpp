/*************************************************************************
	> File Name: 2.gouzao.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 19时16分09秒
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

    }
    Test(int value) {
        a = value;
        cout << "Test(int) "<< a << endl;
    }
    int getA() {
        return a;
    }
};

Test t1;//全局区，不初始化默认值为０
int main() {
    Test t = Test();
    cout << t1.getA() << endl;
    cout << t.getA() << endl;
}
