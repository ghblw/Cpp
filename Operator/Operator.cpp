/*************************************************************************
	> File Name: Operator.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月02日 星期三 23时24分05秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include "Operator.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Operator::setValue(double a, double b) {
    m = a;
    n = b;
    return ;
}

bool Operator::setOp(char c) {
    bool ret = false;
    if ((c == '+') || (c == '-') || (c == '*') || (c == '/')) {
        ret = true;
        op = c;
    }
    return ret;
}

bool Operator::result(double &r) {
    bool ret = true;
    switch (op) {
        case '+': {
            r = m + n;
            break;
        }
        case '-': {
            r = m - n;
            break;
        }
        case '*': {
            r = m * n;
            break;
        }
        case '/': {
            if (n >= -0.000001) && (n <= 0.000001) {
                ret = false;
                r = 0;
                break;
            } else {
                r = m / n;
                break;
            }
        }
        default: {
            ret = false;
            break;
        }
    }
}
