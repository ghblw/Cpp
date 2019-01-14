/*************************************************************************
	> File Name: 4.jicheng.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2019年01月08日 星期二 19时53分44秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Father {
    private:
    int i;
    public:
    Father() {
        i = 100;
    }
    int get() {
        return i;
    }
    virtual void say() {
        cout << "I'm Father" << endl;
    }
};

class Son : public Father {
    private:
    int age;
    public:
    int getAge() {
        return age;
    }
    void say() {
        cout << "I'm Son" << endl;
    }
};

void how_to_say(Father *f) {
    f->say();
}

int main() {
    Father f;
    Son s;
    cout << s.getAge() << endl;
    cout << s.get() << endl;
    how_to_say(&f);
    how_to_say(&s);
    return 0;
}
