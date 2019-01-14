/*************************************************************************
	> File Name: 3.const.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月03日 星期四 20时41分28秒
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
    const int m;
    public:
    Test(int v) : m(10){
        this->j = 5;
        this->i = v;
    }
    int getI() const{
        cout << "const" << endl;
        return this->i;
    }
    int getI() {
        cout << "no const" << endl;
        return this->i;
    }
    int getJ() {
        return this->j;
    }
    int getM() const {
        return this->m;
    }
    void setM(int v) {
        int *p = const cast<int *>(&m);
        *p = v;
        return ;
    }
};

int main() {
    const Test t(1);
    cout << t.getM() << endl;
    t.setM(100);
    cout << t.getI() << endl;
    
    //cout << t.getJ() << endl;//报错：getJ()不是const方法
    return 0;
}
