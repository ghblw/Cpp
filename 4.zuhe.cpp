/*************************************************************************
	> File Name: 4.zuhe.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月08日 星期二 19时26分43秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Mem {
    public:
    Mem() {
        cout << "Mem" << endl;
    }
    ~Mem() {
        cout << "~Mem" << endl;
    }
};
class Disk {
    public:
    Disk() {
        cout << "Disk" << endl;
    }
    ~Disk() {
        cout << "~CPU" << endl;
    }
};
class CPU {
    public:
    CPU() {
        cout << "CPU" << endl;
    }
    ~CPU() {
        cout << "~CPU" << endl;
    }
};
class Computer {
    private:
    Mem m;
    Disk d;
    CPU c;
    public:
    void PowerOn() {
        cout << "Power on" << endl;
    }
    ~Computer() {
        cout << "~Computer" << endl;
    }
};

int main() {
    Computer c;
    return 0;
}
