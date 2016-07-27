#include<iostream>
#include<cmath>

using namespace std;

class Triangle
{
public:
    double edge1,edge2,edge3;
    Triangle(double side1 = 0,double side2 = 0,double side3 = 0):edge1(side1) , edge2(side2) , edge3(side3){}
    ~Triangle()
    {
    }
    void judge()
    {
        if(edge1+edge2>edge3&&edge2+edge3>edge1&&edge1+edge3>edge2)
            cout<<"能构成三角形"<<endl;
        else
            cout<<"不能构成三角形"<<endl;
    }
    void judge1()
    {
        if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2||edge2*edge2+edge3*edge3==edge1*edge1)
            cout<<"能构成直角三角形"<<endl;
        else
            cout<<"不能构成直角三角形"<<endl;
    }
    void area()
    {
        double p=(edge1+edge2+edge3)/2;
        cout<<sqrt(p*(p-edge1)*(p-edge2)*(p-edge3))<<endl;;
    }
};

int main()
{
    Triangle tan1(1,2,3),tan2(3,4,5);
    tan1.judge();
    tan2.judge1();
    tan1.area();
    tan2.area();
    return 0;
}
