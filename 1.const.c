/*************************************************************************
	> File Name: 1.const.c
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2018年12月28日 星期五 17时55分00秒
 ************************************************************************/

#include<stdio.h>

int main() {
    const int a = 5;
    int *p = (int *)&a;
    *p = 6;
    printf("%d, %d\n", a, *p);
}
