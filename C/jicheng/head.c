/*************************************************************************
	> File Name: head.c
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 11时28分09秒
 ************************************************************************/

#include<stdio.h>

typedef struct class_demo {
    int a;
    int b;
} class_demo;

typedef struct class_derived {
    class_demo d;
    int c;
} class_derived;

demo* demo_init(int i, int j) {
    class_demo *p = (class_demo *) malloc(sizeof(class_demo));
    if (p != NULL) {
        p->a = i;
        p->b = j;
    }
    return p;
}

int getA(demo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->a;
}

int getB(damo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->b;
}
