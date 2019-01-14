/*************************************************************************
	> File Name: 4.revtest.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月08日 星期二 18时16分38秒
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
    int i;
    public:
    Test(int v) {
        i = v;
    }
    Test() {
        i = 0;
        cout << ""
    }
    void printI() {
        cout << "i = " << i << endl;
    }
};

void func1(Test t) {
    return ;
}

Test func2() {
    return Test(100);
}
int main() {
    Test t = Test(100);
    t.printI();
    func1(t);
    return 0;
}
