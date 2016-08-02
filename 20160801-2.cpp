#include<iostream>
#include<math.h>
using namespace std;
class algorith
{
    double a,b;
public:
    algorith(double A=1,double B=1)
    {
        a=A;
        b=B;
    }
    algorith operator + (algorith temp)
    {
        algorith c;
        int d;
        if(b==temp.b)
        {
            c.a=a+temp.a;
            c.b=b;
        }
        else
        {
            c.b=b*temp.b;
            c.a=a*temp.b+b*temp.a;
        }
        d=fun(c.a,c.b);
        c.a/=d;
        c.b/=d;
        return c;
    }
    algorith operator - (algorith temp)
    {
        algorith c;
        int d;
        if(b==temp.b)
        {
            c.a=a-temp.a;
            c.b=b;
        }
        else
        {
            c.b=b*temp.b;
            c.a=a*temp.b-b*temp.a;
        }
        d=fun(c.a,c.b);
        c.a/=d;
        c.b/=d;
        return c;
    }
    algorith operator * (algorith temp)
    {
        algorith c;
        int d;
        c.a=a*temp.a;
        c.b=b*temp.b;
        d=fun(c.a,c.b);
        c.a/=d;
        c.b/=d;
        return c;
    }
    algorith operator / (algorith temp)
    {
        algorith c;
        c.a=a/temp.a;
        c.b=b/temp.b;
        int d;
        d=fun(c.a,c.b);
        c.a/=d;
        c.b/=d;
        return c;
    }
    friend bool operator < (algorith q,algorith p)
    {
        q.a=q.a*p.b;
        p.a=p.a*q.b;
        if(q.a<p.a)
            return true;
        else
            return false;
    }
    friend bool operator > (algorith q,algorith p)
    {
        q.a=q.a*p.b;
        p.a=p.a*q.b;
        if(q.a>p.a)
            return true;
        else
            return false;
    }
    friend bool operator <= (algorith q,algorith p)
    {
        q.a=q.a*p.b;
        p.a=p.a*q.b;
        if(q.a<=p.a)
            return true;
        else
            return false;
    }
    friend bool operator >= (algorith q,algorith p)
    {
        q.a=q.a*p.b;
        p.a=p.a*q.b;
        if(q.a>=p.a)
            return true;
        else
            return false;
    }
    int fun(int m,int n)
    {
        return m%n==0?n:fun(n,m%n);
    }
    friend ostream&operator<<(ostream &h,algorith&temp)
    {
        if(temp.a==0)
            h<<"0"<<"\n";
        else if(temp.b==1)
            h<<temp.a/temp.b<<"\n";
        else if(temp.b/temp.a>0)
            h<<abs(temp.a)<<"/"<<abs(temp.b)<<"\n";
        else if(temp.b/temp.a<0)
            h<<"-"<<abs(temp.a)<<"/"<<abs(temp.b)<<"\n";
        return h;
    }
    friend istream&operator>>(istream &h,algorith&temp)
    {
        char t;
        h>>temp.a>>t>>temp.b;
        if(temp.b==0)
            cout<<"error";
        return h;
    }
};

int main()
{
    algorith a,b,c,d,e;
    char t;
    cin>>a;
    cin>>b;
    cin>>t;
    if(t=='+')
        c=a+b;
    else if(t=='-')
        c=a-b;
    else if(t=='*')
        c=a*b;
    else if(t=='/')
        c=a/b;
    cout<<c;
    cin>>d;
    cin>>e;
    if(d<e)
        cout<<d<<endl;
    else
        cout<<e;
    return 0£»
}