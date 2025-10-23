#include <iostream>
using namespace std;

class Animal
{

private:
    int age;

protected:
    string kind;
    void say_kind()
    {
        cout << "My kind is " << kind << endl;
    }
    void set_kind(string new_name)
    {
        this->kind = new_name;
    }

public:
    string name;
    void say_hello() const
    {
        cout << "say_hello.I'm " << name << endl;
    }

    void set_name(string new_name)
    {
        this->name = new_name;
    }
};

class Pig : public Animal
{
public:
    string name;

    Pig(string name) {}
};

int main(int argc, char **argv)
{

    Pig *p = new Pig("kkk");

    p->set_name("new name");
    p->say_hello();
}
