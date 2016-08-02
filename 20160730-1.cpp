#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Student
{
public:
    string name;
    int grade1;
    int grade2;
    int grade3;
    static int id;
    Student(string NAME , int G1 , int G2, int G3):name(NAME),grade1(G1),grade2(G2),grade3(G3){}
    void add(string NAME,int G1,int G2,int G3)
    {
        name = NAME;
        grade1 = G1;
        grade2 = G2;
        grade3 = G3;
        id++;
    }
    void change(string NAME,int G1,int G2,int G3)
    {
        name = NAME;
        grade1 = G1;
        grade2 = G2;
        grade3 = G3;
    }
    void delete1()
    {
        name = "";
        grade1 = 0;
        grade2 = 0;
        grade3 = 0;
        id--;
    }
    void display()
    {
        if(grade1>=85&&grade2>=85&&grade3>=85)
            cout<<name<<endl;
    }
    int judge()
    {
        int sum;
        sum=grade1+grade2+grade3;
        return sum;
    }
    ~Student(){}
};

int Student::id = 0;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    Student q("tom",100,100,100),w("lisa",99,99,99),e("jack",85,85,85),r("dav",80,82,82),t("ellen",10,20,20);
    int a[5]={q.judge(),w.judge(),e.judge(),r.judge(),t.judge()};
    sort(a,a+5,cmp);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<q.name<<endl<<w.name<<endl<<e.name<<endl<<r.name<<endl<<t.name<<endl;
    return 0;
}
