/*************************************************************************
	> File Name: 4.jc.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月08日 星期二 20时39分31秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Object {
    protected:
    string m_name;
    string m_info;
    public:
    Object() {
        m_name = "Object";
        m_info = "";
    }
    string name() {
        return m_name;
    }
    string info() {
        return m_info;
    }
};

class Point : public Object {
    private:
        int m_x;
        int m_y;
    public:
    Point(int x. int y) {
        m_x = x;
        m_y = y;
        m_name = "Point";
        ostringstream s;
        s << "P(" << m_x << "," << m_y << ;
        m_info = s.str();
    }
    int x() {
        return m_x;
    }
    int y() {
        return m_y;
    }
};

class Line : public Object {
    private:
    Point m_p1;
    Point m_p2;
    public:
    Line(Point &p1, Point &p2) {
        m_p1 = p1;
        m_p2 = p2;
        m_name = "Line";
        ostringstream s;
        s << "Linde from" << m_p1.info() << "to" << m_p1.info();
    }
    Point begin() {
        return m_p1;
    }
    Point end() {

    }
}
