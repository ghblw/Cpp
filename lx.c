/*************************************************************************
	> File Name: lx.c
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2018年12月25日 星期二 18时08分34秒
 ************************************************************************/

#include<stdio.h>

int add() {
    return 1;
}
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("%d", add());
    printf("%d", add(1, 2));
    printf("%d", add(1, 2, 3));
}
