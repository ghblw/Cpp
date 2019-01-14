/*************************************************************************
	> File Name: Operator.h
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月02日 星期三 23时28分20秒
 ************************************************************************/

#ifndef _OPERATOR_H
#define _OPERATOR_H
class Operator {
    private:
        double m;
        double n;
        char op;
    public:
        void setValue(double a, double b);
        bool setOp(char c);
        bool retult(double &r);
};
#endif
