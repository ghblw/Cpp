/*************************************************************************
	> File Name: 7.duotai_boss.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 09时53分46秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class cpnA_boss {
    public:
    int battle() {
        int ret = 10;
        cout << "cpnA_boss :: battle = " << ret << endl;
        return ret;
    }
};
class cpnB_boss {
    public:
    virtual int fight() {
        int ret = 8;
        cout << "cpnB_boss :: fight = " << ret << endl;
        return ret;
    }
};

class cpnB_boss_new : public cpnB_boss {
    public:
    int fight() {
        //当前对象的父类的方法,不是静态成员方法，是作用域分辨符
        int ret = this->cpnB_boss::fight() * 2;
        cout << "New Boss::fight = " << ret << endl;
        return ret;
    }
};

void vs(cpnA_boss *c1, cpnB_boss *c2) {
    int a = c1->battle();
    int b = c2->fight();
    if (a > b) {
        cout << "cpn A is winner" << endl;
    } else {
        cout << "cpn B is winner" << endl;
    }
    return ;
}

int main() {
    cpnA_boss c1;
    cpnB_boss c2;
    vs(&c1, &c2);
    cout << "one year later.." << endl;
    cpnB_boss_new nb;
    vs(&c1, &nb);
}

