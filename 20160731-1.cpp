#include<iostream>
#include<string>

using namespace std;

class Employee
{
public:
    string name;
	int age;
	string major;
	double salary;
	Employee(string str,int y,string MA,double MO):name(str),age(y),major(MA),salary(MO){}
	~Employee()
	{
	}
	virtual double salary1()
	{
		return salary;
	}
	virtual void print()
	{
		cout<<" 姓名："<<name<<" 年龄："<<age<<" 工资："<<salary<<endl;
	}
};

class Manager:public Employee
{
public:
    int level;
	double help;
	Manager(string s,int y,string str,double num,double hel):Employee(s,y,str,num),help(hel){}
	~Manager()
	{
	}
	double salary1()
	{
		return salary+help;
	}
	void print()
	{
		cout<<" 姓名："<<name<<" 年龄："<<age<<" 工资："<<salary<<cout<<" 补贴："<<help<<endl;
	}
};

class Technician:public Employee
{
public:
    double hour;
	double hoursalary;
	Technician(string s,int y,string str,double num,double a,double b):Employee(s,y,str,num),hour(a),hoursalary(b){}
	double salary1()
	{
		return salary+hour*100;
	}
	void print()
	{
		cout<<" 姓名："<<name<<" 年龄："<<age<<" 工资："<<salary<<cout<<" 工作时间："<<hour<<" 计时工资："<<hoursalary<<endl;
	}
};

class Salesman:public Employee
{
public:
    double salenum;
	double salepe;
	Salesman(string s,int y,string str,double num,double a,double b):Employee(s,y,str,num),salenum(a),salepe(b){}
	~Salesman()
	{
	}
	double salary1()
	{
		return salary+salenum*0.05;
	}
	void print()
	{
		cout<<" 姓名："<<name<<" 年龄："<<age<<" 工资："<<salary<<" 销售提成比率 :"<<salepe<<" 销售额："<<salenum<<endl;
	}
};

class SalesManager:public Manager
{
public:
    double salenum;
	double salepe;
	SalesManager(string s,int y,string str,double num,double a,double b,double c):Manager(s,y,str,num,a),salenum(b),salepe(c){}
	~SalesManager()
	{
	}
	double salary1()
	{
		return salary+help+salepe*0.02;
	}
	void print()
	{
		cout<<" 姓名："<<name<<" 年龄："<<age<<" 补贴："<<help<<" 工资："<<salary<<" 销售提成比率 :"<<salepe<<"销售额："<<salenum<<endl;
	}
};

int main()
{
	Employee one("jun",9,"software",999999);
	one.print();
	return 0;
}
