/*************************************************************************
	> File Name: 5.head.h
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月10日 星期四 20时25分36秒
 ************************************************************************/

#ifndef _5.HEAD_H
#define _5.HEAD_H
typedef void demo;
demo* demo_init(int i, int j);
int getI(demo *pthis);
int getJ(demo *pthis);
int add(demo *pthis, int value);
void free_demo(demo *pthis);
#endif
