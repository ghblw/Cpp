/*************************************************************************
	> File Name: template_many.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 16时45分16秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T1, typename T2>
T1 add(T2 a, T2 b) {
    return static_cast<T1>(a + b);
}

int main() {
    int r1 = add<int(0.5, 0.3);
    int r2 = add<int, float>(0.3, 0.6);
    int r3 = add<int, float, float>(0.5, 0.5);
    cout << r1 << endl;

}
//多个类型参数时，返回值类型不能自动推导
//可以从左至右给出部分指定实参类型
//多个类型参数时，如果有返回值类型也需要，一般写在第一个位置上
//sub(string. string)
//重载优先看自己有没有
