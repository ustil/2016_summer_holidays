#include<iostream>
#include<algorithm>

using namespace std;

const int SetCapacity = 100;
class set
{
public:
    int elements[SetCapacity]; //数据区
    int size; //元素个数
    set(int num = 0):size(num){} //构造函数
    set(const set& src):size(src.size){}//拷贝构造函数
    bool Contains(int el)
    {
        for(int i=0;i<SetCapacity;i++)
        {
            if(elements[i]==el)
                return true;
        }
    } //是否包含元素el
    void Add(int el)
    {
       elements[size++]==el;
    } //添加元素el
    void Remove(int el)
    {
        for(int i=0;i<size;i++)
        {
            if(elements[i]==el)
            {
                for(int j=i;j>0;j--)
                    elements[j]==elements[j-1];
            }
        }

    } //删除元素el
    void Assign(set& st)
    {
        size=st.size;
        for(int i=0;i<size;i++)
            elements[i]=st.elements[i];
    } //将st赋值给当前集合
    bool EqualTo(set& st)
    {
        for(int i=0;i<size;i++)
        {
            if(elements[i]!=st.elements[i])
                return 0;
            else
                return 1;
        }
    } //判别集合st与当前集合是否相同（元素相同
    bool Empty()
    {
        return size;
    } //集合是否为空
    set Intersect(set& st)
    {
        for(int i=0;i<size;i++)
            for(int j=0;j<st.size;j++)
                if(elements[i]==st.elements[j])
                    cout<<elements[i]<<endl;
    } //求集合st 与当前集合的交集
    set Union(set& st)
    {
        size+=st.size;
        sort(elements,elements+size);
        for(int i=0;i<size-1;i++)
        {
            if(elements[i]==elements[i+1])
            {
                for(int j=i;i<size;i++)
                    elements[j]=elements[j+1];
            }
        }
    } //求集合st 与当前集合的并集
    void print()
    {
        for(int i=0;i<size;i++)
            cout<<elements[i]<<endl;
    } //显示集合的所有元素
};

int main()
{
    set temp;
    temp.Add(6);
    temp.Remove(6);
    temp.print();
    return 0;
}
