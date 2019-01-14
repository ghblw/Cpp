/*************************************************************************
	> File Name: 2.array.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月01日 星期二 20时16分46秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Array {
    public:
    Array(int n) {
        data = new int[n];
        len = n;
    }
    int getlen() {
        return strlen(data);
    }
    bool set(int index, int value) {
        if (index >= len) return 0;
        data[index] = value;
        return 1;
    }
    bool get(int index, int &value) {
        if (index >= len) return 0;
        value = data[index];
        return 1;
    }
    private:
    int *data;
    int len;
};

int main() {
    Array arr(10);
}
