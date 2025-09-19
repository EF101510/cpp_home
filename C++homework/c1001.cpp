#include <iostream>
#include <string>
#include "utils.hpp"
using namespace std;

struct Student
{
    string name;
    int grade;
    int seat;

    // __init__ method equivalent in C++
    Student(string n, int g, int s)
    {
        cout << "Constructor called for " << n << endl;
        name = n;
        grade = g;
        seat = s;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }

    void say_hello()
    {
        cout << "Hello, my name is " << name << ", grade " << grade << ", seat " << seat << "." << endl;
    }
};

int main(int argc, char **argv)
{
    // 使用建構子建立物件
    Student s1("Alice", 9, 1);
    Student s2("Bob", 8, 2);
    Student s3("Charlie", 1, 3);

    s1.say_hello();

    // 使用 new 建立物件
    Student *s4 = new Student("David", 7, 4);
    // (*s4).say_hello();
    s4->say_hello(); // 使用箭頭運算子呼叫方法
    delete s4;       // 釋放記憶體並呼叫解構子

    return 0;
}
