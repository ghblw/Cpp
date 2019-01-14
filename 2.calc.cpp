/*************************************************************************
	> File Name: 2.calc.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 18时46分07秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class calc {
    public:
    void setop(char op) {
        op1 = op;
    }
    void setab(int a, int b) {
        a1 = a;
        b1 = b;
    }
    bool cal() {
        flag == true;
        if (op == '+') ans = a + b;
        if (op == '-') ans = a - b;
        if (op == '*') ans = a * b;
        if (op == '/' && b) ans = a / b;
        if (op == '/' && !b) flag = false;
        return flag;
    }
    private:
    int a1;
    int b1;
    char op1;
    int ans;
    int flag;
};

int main() {
    calc Calc;
    Calc.setop('+');
    Calc.setab(1, 2);
    Calc.cal();
    cout << Calc.ans << endl;
}
