#include<iostream>
#include<string>

using namespace std;

class PB
{
public:
    string name;
    string num;
    PB(string s1,string s2):name(s1),num(s2){}
    void add(string s1,string s2)
    {
        name = s1;
        num = s2;
    }
    void dele()
    {
        name = " ";
        num = " ";
    }
    void print()
    {
        cout<<name<<" : "<<num<<endl;
    }
};

int main()
{
    PB one(" tom "," 13111111111 ");
    return 0;
}
