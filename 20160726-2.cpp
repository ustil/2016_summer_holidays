#include<iostream>
#include<string>

using namespace std;

class   Address
{
    string name,address,city,postnum;
public:
    Address(string name1 = "",string address1 = "",string city1 = "",string postnum1 = "")
    {
        name = name1;
        address = address1;
        city = city1;
        postnum = postnum1;
    }
    ~Address()
    {
    }
    void ChangeName()
    {
        string name2,address2,city2,postnum2;
        cout<<"输入修改后的信息："<<endl;
        cout<<"姓名："<<endl;
        cin>>name2;
        name = name2;
        cout<<"地址："<<endl;
        cin>>address2;
        address = address2;
        cout<<"城市："<<endl;
        cin>>city2;
        city = city2;
        cout<<"邮编："<<endl;
        cin>>postnum2;
        postnum = postnum2;
    }
    void Display()
    {
        cout<<name<<" "<<address<<" "<<city<<" "<<postnum<<endl;
    }
};

int main()
{
    Address one("jun","diqiu","shenyang","666666");
    one.ChangeName();
    one.Display();
    return 0;
}
