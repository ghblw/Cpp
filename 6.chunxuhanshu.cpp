/*************************************************************************
	> File Name: 6.chunxuhanshu.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 14时40分59秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Interface {
    public:
    virtual bool open() = 0;
    virtual void close() = 0;
    virtual bool send(char *buf, int len) = 0;
    virtual int receive(char *buf, int len) = 0;
};


