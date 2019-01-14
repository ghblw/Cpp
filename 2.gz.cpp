/*************************************************************************
	> File Name: 2.gz.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 20时38分15秒
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
        cout << "Test(int)" << a << endl;
    }
    int getA() {
        return a;
    }
};

int main() {
    Test *p = new Test(1);
    Test t[3] = {Test(), Test(2), Test(3)};
    for (int i = 0; i < 3; i++) {
        cout << t[i].getA() << endl;
    }
}
