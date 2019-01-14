/*************************************************************************
	> File Name: 3.static.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月03日 星期四 20时14分37秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//静态成员变量和静态成员方法
class Test {
    private:
        static int cnt;
        int m;
    public:
    static int getCnt() {
        return m;
    }
    Test() {
        m = 1;
        cnt += 1;
    }
    ~Test() {
        cnt -= 1;
    }
};
int Test::cnt = 0;
int main() {
    cout << Test::getCnt() << endl;
    Test t1;
    cout << Test::getCnt() << endl;
    Test *p = new Test();
    cout << Test::getCnt() << endl;
    delete p;
    cout << Test::getCnt() << endl;
    return 0;
}
