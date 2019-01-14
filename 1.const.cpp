/*************************************************************************
	> File Name: 1.const.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2018年12月28日 星期五 18时01分13秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    const int a = 5;
    int *p = (int *)&a;
    *p = 6;
    printf("%d, %d\n", a, *p);
}
