/*************************************************************************
	> File Name: 6.duojichengfuxi.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月16日 星期三 09时13分01秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class People {
    private:
    string name;
    int age;
    public:
    People(string s1, int v1) : name(s1), age(v1) {
        
    }
    void print() {
        cout << name << " " << age << endl;
    }
};
class Student : virtual:public People {
    public:
    Student(string s1, int v1)
}

class Doctor : public Teacher, public Student {
    public:
    Doctor(string s1, int v1) : Teacher(s1 + "1", v1 + 1), Student(s2 + "2", v1 + 2) {
        
    }
}

int main() {
    Doctor d("qwe", 28);
    d.Teacher;
}
