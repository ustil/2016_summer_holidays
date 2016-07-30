#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Manager
{
public:
    string name;
    string id;
    string username;
    int password;
    int phonenum;
    int money;
    void add()
    {
        cout<<" 请输入姓名：";
        cin>>name;
        cout<<" 请输入身份证号码：";
        cin>>id;
        cout<<" 请输入用户名：";
        cin>>username;
        cout<<" 请输入密码：";
        cin>>password;
        cout<<" 请输入手机号：";
        cin>>phonenum;
        ofstream f1("cpp.txt");
        f1<<"  姓名："<<name<<endl;
        f1<<"  身份证号码："<<id<<endl;
        f1<<"  用户名："<<username<<endl;
        f1<<"  密码："<<password<<endl;
        f1<<"  手机号码："<<phonenum<<endl;
        f1.close();
    }
    void save()
    {
        int money1;
        cout<<" 请输入要存的金额：";
        cin>>money1;
        money+=money1;
        ofstream f1("cpp.txt");
        if(!f1)return;
        f1<<"  姓名："<<name<<endl;
        f1<<"  身份证号码："<<id<<endl;
        f1<<"  用户名："<<username<<endl;
        f1<<"  密码："<<password<<endl;
        f1<<"  余额："<<money<<endl;
        f1.close();
    }
    int take()
    {
        int money1;
        cout<<" 请输入要取的金额：";
        cin>>money1;
        if(money1>money)
        {
            cout<<" 余额不足!"<<endl;
            return take();
        }
        else
        {
            money-=money1;
        }
        ofstream f1("cpp.txt");
        f1<<"  姓名："<<name<<" , "<<endl;
        f1<<"  身份证号码："<<id<<" , "<<endl;
        f1<<"  用户名："<<username<<" , "<<endl;
        f1<<"  密码："<<password<<" , "<<endl;
        f1<<"  余额："<<money<<" 。 "<<endl;
        f1.close();
    }
    void display()
    {
        cout<<" 您的账号余额为："<<money<<" 元 "<<endl;
        ofstream f1("cpp.txt");
        f1<<" 您的账号余额为："<<money<<endl;
        f1.close();
    }
    void print()
    {
        cout<<" 姓名："<<name<<endl;
        cout<<" 身份证号码："<<id<<endl;
        cout<<" 账号："<<username<<endl;
        cout<<" 密码："<<password<<endl;
        cout<<" 余额："<<money<<endl;
        cout<<" 手机号码："<<phonenum<<endl;
    }
    void change()
    {
        int password1;
        cout<<" 请输入修改后的密码：";
        cin>>password1;
        password=password1;
        cout<<" 修改密码成功! "<<endl;
        ofstream f1("cpp.txt");
        f1<<"  姓名："<<name<<" , "<<endl;
        f1<<"  身份证号码："<<id<<" , "<<endl;
        f1<<"  账号："<<username<<" , "<<endl;
        f1<<"  密码："<<password<<" , "<<endl;
        f1<<"  余额："<<money<<" , "<<endl;
        f1<<"  手机号码："<<phonenum<<" 。 "<<endl;
        f1.close();
    }
    int out()
    {
         return 0;
    }
    void index()
    {
        int temp;
        cout<<" 欢迎使用银行管理系统 , 请选择："<<endl;
        cout<<" 1.开户 "<<endl;
        cout<<" 2.操作 "<<endl;
        cin>>temp;
        switch(temp)
        {
            case 1:add();break;
            case 2:index1();break;
        }
    }
    void index1()
    {
        int temp;
        cout<<" 1.存款 "<<endl;
        cout<<" 2.取款 "<<endl;
        cout<<" 3.余额查询 "<<endl;
        cout<<" 4、信息查询 "<<endl;
        cout<<" 5、修改密码 "<<endl;
        cout<<" 6、退出 "<<endl;
        cout<<" 请输入操作：";
        cin>>temp;
        switch(temp)
        {
            case 1:save();break;
            case 2:take();break;
            case 3:display();;break;
            case 4:print();break;
            case 5:change();break;
            case 6:out();break;
        }
    }
};

int main()
{
    Manager one;
	one.index();
    return 0;
}
