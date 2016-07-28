#include<iostream>

using namespace std;

class Queue
{
public:
    int* data; //数据区
    int front, rear; //首尾位置
    int capacity;//数据区容量
    Queue (int size = 10):capacity(size){ data = new int[size];  front = rear = 0;} //构造函数
    ~Queue ()
    {
    } //析构函数
    bool empty () const
    {
        return front == rear;
    } //队列是否为空
    bool full() const
    {
        return rear == capacity;
    }    //队列是否已满
    int size () const
    {
        if(!empty()&&!full())
        {
            return rear;
        }
    }//队列中元素的个数
    void push (int temp)
    {
        data[rear+1]=temp;
    }    //插入一个元素
    int pop ()
    {
        for(int i=rear;i>0;i--)
            data[i]=data[i-1];
    }    //弹出一个元素
};//、2016年7月27业 1.队列是一种连续的存储结构，存入数据只能从一端（称为尾部）进入，取出数据则只能从另一端（头部）取出。根据下述描述实现一个自定义的队列类:

int main()
{
    Queue quene(15);
    cout<<quene.size()<<endl;
    quene.push(6);
    quene.pop();
    return 0;
}
