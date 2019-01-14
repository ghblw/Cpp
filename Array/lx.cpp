/*************************************************************************
	> File Name: lx.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月03日 星期四 10时10分59秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using namespace std;
class  Array {
    private:
    int m_len;
    int *data;
    public:
    Array(int len);
    Array(const Array &obj);
    bool setValue(int index, int value);
    bool getValue(int index, int &value);
    int getLen();
    void free();

};

Array::Array(int len) {
    m_len = len;
    data = new int[m_len];
    for(int i = 0; i < m_len; ++i) {
        data[i] = 0;

    }

}

Array::Array(const Array &obj) {
    m_len = obj.m_len;
    data = new int[m_len];
    for(int i = 0; i < m_len; ++i) {
        data[i] = obj.data[i];

    }

}

bool Array::setValue(int index, int value) {
    bool ret = (index >= 0) && (index <= getLen());
    if(ret) {
        data[index] = value;

    }
    return ret;

}

int Array::getLen() {
    return m_len;

}

bool Array::getValue(int index, int &value) {
    bool ret = (index >= 0) && (index < getLen());
    if(ret) {
        value = data[index];

    }
    return ret;

}

void Array::free() {
    delete[] data;

}

int main() {
    Array a(10);
    Array a1 = a;
    for(int i = 0; i < a.getLen(); ++i) {
        a.setValue(i, i + 1);

    }
    for(int i = 0; i < a.getLen(); ++i) {
        int v = 0;
        a.getValue(i, v);
        cout << i << ":" << v << endl;

    }
    a.free();
    for(int i = 0; i < a1.getLen(); ++i) {
        a1.setValue(i, i + 1);

    }
    for(int i = 0; i < a1.getLen(); ++i) {
        int v = 0;
        a1.getValue(i, v);
        cout << i << ":" << v << endl;

    }
    a1.free();
    return 0;

}
