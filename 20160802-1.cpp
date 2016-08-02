#include<iostream>
#include<string.h>

using namespace std;

class String
{
public:
    char *str1;
    String( char *str = "")
    {
        if(str == "")
        {
            str1 = new char[1];
            str1[0] = '\0';
        }
        else
        {
            str1 = new char[strlen(str)+1];
            strcpy(str1,str);
        }
    }
    ~String()
    {
        delete []str1;
    }
    friend ostream& operator<<(ostream &out, String &s)
    {
        out<<s.str1;
        return out;
    }
    friend istream& operator>>(istream &in, String &s)
    {
        in>>s.str1;
        return in;
    }
    char& operator[](int index)
    {
        return str1[index];
    }
};


int main()
{
    String s("s");
    String s1("s");
    String s2;
    cout<<"s[0] = "<<s[0]<<endl;
    return 0;
}
