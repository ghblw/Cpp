/*************************************************************************
	> File Name: array.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月03日 星期四 10时10分32秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Array {
    private:
        int length;
        int *data;
    public:
        Array(int len);
        Array(const Array &obj);
        ~Array();
        bool setval(int ind, int val);
        bool getval(int ind, int &val);
        int getlen();
        //void free();
};

Array::Array(int len) {
    length = len;
    data = new int[len];
}

Array::Array(const Array &obj) {
    length = obj.length;
    data = new int[length];
    for (int i = 0; i < length; i++) {
        data[i] = obj.data[i];
    }
}

bool Array::setval(int ind, int val) {
    if (ind < 0 || ind >= getlen()) return 0;
    data[ind] = val;
    return 1;
}

bool Array::getval(int ind, int &val) {
    if (ind < 0 || ind >= getlen()) return 0;
    val = data[ind];
    return 1;
}

int Array::getlen() {
    return length;
}

Array::~Array() {
    delete[] data;
}

int main() {
    Array a(10);
    int flag;
    flag = a.setval(15, 5);//模拟数组越界
    if (!flag) {
        cout << "越界" << endl;
    }
    a.setval(2, 5);
    int k;
    a.getval(2, k);
    cout << "第二位"<< k << endl;
    Array b = a;
    b.getval(2, k);
    cout << "拷贝后第二位"<< k << endl;
}
