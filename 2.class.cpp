/*************************************************************************
	> File Name: 2.class.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 18时33分12秒
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
        int j;
    public:
        int a;
        int geti() {
            return i;
        }
        int getj() {
            return j;
        }
        int geta() {
            return a;
        }
        void seti(int value) {
            i = value;
            return ;
        }
};

int main() {
    Test t;
    Test *t1 = new Test;
    t.a = 5;
    t1->a = 10;
    t.seti(100);
    cout << t.geti() << " " << t1->a << endl;
    return 0;
}
