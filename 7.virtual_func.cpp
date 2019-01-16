/*************************************************************************
	> File Name: 7.virtual_func.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 14时21分37秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Shap {
    public:
        virtual double area() = 0;
        //virtual void print() = 0;
};

class Rect : public Shap {
    private :
    double h;
    double w;
    public:
    Rect(double v1, double v2) {
        h = v1;
        w = v2;
    }
    double area() {
        return h * w;
    }
};

class Circle : public Shap {
    private:
        double r;
    public:
    Circle(double v1) {
        r = v1;
    }
    double area() {
        return 3.14 * r * r;
    }
};

int main() {
    Rect r(3.2, 4.5);
    Circle c(0.6);
    cout << r.area() << endl;
    cout << c.area() << endl;
}
