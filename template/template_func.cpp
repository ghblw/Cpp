/*************************************************************************
	> File Name: template_func.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 15时58分37秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
#define SWAP(t, a, b) {\
    t (temp) = (a);\
    (a) = (b);\
    (b) = (temp);\
}

int my_swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void my_swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void my_swap(string &s1, string &s2) {
    string temp = s1;
    s1 = s2;
    s2 = temp;
}

template <typename T>
void my_swap1(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class Test {
    private:
    Test(const Test &t) {
        
    }
    public:
    Test() {
        
    }
}

template <typename T>
void my_sort(T *a, int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            if (a[i] > a[j]) {
                my_swap1(a[i], a[j]);
            }
        }
    }
}

template <typename T>
void print(T *a, int len) {
    for (int i = 0; i < len; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    string s1 = "wrf", s2 = "cxh";
    int a = 10, b = 20;
    double c = 3.2, d = 4.5;
    SWAP(int, a, b);
    SWAP(double, c, d);
    SWAP(string, s1, s2);
    my_swap(a, b);
    my_swap(c, d);
    my_swap(s1, s2);
    my_swap1(s1, s2);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    cout << s1 << " " << s2 << endl;
    Test t1, t2;
    myswap1(t1, t2);

    int a[5] = {3, 2, 1, 4, 6};
    double b[5] = {3.1, 4.2, 1.7, 4.3, 0.2};
    string s[5] = {"c", "java", "c++", "c#", "python"};
    print(a, 5);
    my_sort(a, 5);
    
}
//注意事项
//函数模板本身不支持类型的隐式转换
//在自动推导类型时，必须严格遵循类型匹配 int int double double 
//而且不会进行隐式类型转换
//显式指定类型时，能够进行隐式类型转换（后续学习多参模板）
