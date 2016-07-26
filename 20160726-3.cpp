#include<iostream>
#include<cmath>

using namespace std;

class product
{
    char* tag; //产品名称
    double price; //单价
    int quantity; //库存数量
public:
    product(char *s = "",double A = 0,int B = 0)
    {
        tag = s;
        price = A;
        quantity = B;
    }//构造函数
    ~product()
    {
    }//析构函数
    bool buy(double shiji)
    {
        double fei;
        if(shiji>quantity)
            return false;
        else
        {
            quantity -= shiji;
            fei = shiji * price;
        }
    }//购买某种商品函数buy，返回false表示库存数量不够，否则更新库存数量，并计算费用
    void change(double x,double y)
    {
        price = x;
        quantity = y;
    }//属性相关函数，如库存调整、显示库存数量等
    void display()
    {
        cout<<"产品名称："<<tag<<" "<<"单价："<<price<<" "<<"库存数量："<<quantity<<endl;
    }
};

int main()
{
    product one("苹果",1.5,20);
    one.display();
    one.buy(30);
    one.display();
    one.buy(10);
    one.display();
    one.change(2.5,30);
    one.display();
    return 0;
}
