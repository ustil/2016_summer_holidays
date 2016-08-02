#include<iostream>
#include<string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string s,int a):name(s),age(a){}
};

class Person1:public Person
{
public:
    int id;
    string sex;
    Person1(int a,int b,string s1,string s2):Person(s1,a),id(b),sex(s2){}
    void display()
    {
        cout<<id<<" "<<name<<" "<<sex<<" "<<age<<endl;
    }
    void print()
    {
        cout<<" 工号："<<id<<" 姓名："<<name<<" 性别："<<sex<<" 年龄： "<<age<<endl;
    }
};

int main()
{
    Person1 one(1,18," tom "," man ");
    one.print();
    return 0;
}
