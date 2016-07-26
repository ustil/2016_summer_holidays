#15级2016年暑假作业

2016年7月27日作业
1.队列是一种连续的存储结构，存入数据只能从一端（称为尾部）进入，取出数据则只能从另一端（头部）取出。根据下述描述实现一个自定义的队列类:  
  
class Queue  
{   
  public:   
    Queue (int size = 10);      //构造函数   
    ~Queue ();      //析构函数   
    bool empty () const { return front == rear; }  //队列是否为空   
    bool full() const;        //队列是否已满   
    int size () const;        //队列中元素的个数   
    void push (int);      //插入一个元素   
    int pop ();      //弹出一个元素   
  private:   
    int* data;         //数据区   
    int front， rear;           //首尾位置   
    int capacity;               //数据区容量   
};  
  
2.集合是一类数据的聚合体，根据下述描述实现一个集合类的定义：   
  
const int SetCapacity = 100;   
class set   
{   
    int elements[SetCapacity];  //数据区   
    int size;          //元素个数   
  public:   
    set();             //构造函数   
    set(const set& src);     //拷贝构造函数   
    bool Contains(int el);    //是否包含元素el   
    bool Add(int el);      //添加元素el   
    bool Remove(int el);    //删除元素el   
    void Assign(set& st);    //将st赋值给当前集合   
    bool EqualTo(set& st);    //判别集合st与当前集合是否相同（元素相同  
    bool Empty();        //集合是否为空   
set Intersect(set& st);   //求集合st 与当前集合的交集  
    set Union(set& st);     //求集合st 与当前集合的并集   
    void print();        //显示集合的所有元素   
};   
  
2016年7月26日作业
--------
1.设计一个三角形处理类，包含三条边长为数据成员，实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）构造函数；  
（2）析构函数；  
（3）判别是否构成三角形函数；  
（4）是否构成直角三角形函数；  
（5）计算面积函数。  
  
2.设计一个地址类Address，其中包括某人姓名、所居住的街道地址、城市和邮编等属性，实现并测试这个类。  
类中包括的成员函数（要完成操作）有：  
（1）构造函数；  
（2）析构函数；  
（3）ChangeName()成员函数，用于改变对象的姓名等属性。  
（4）Display()成员函数，用于显示姓名、街道地址、城市和邮编等属性。  
  
3.完善下面的产品类，该类用于管理产品的名称、单价和库存数量，能够根据用户输入的产品名称和购买数量计算相应的金额。在 main 函数中模拟几种商品（由键盘输入） ，并实现一个菜单式程序，演示用户任意购买各种商品的过程。  
  
class product  
{  
    char* tag;         //产品名称  
    double price;    //单价  
    int quantity;    //库存数量  
  public:  
    //构造函数  
    //析构函数  
    //购买某种商品函数buy，返回false表示库存数量不够，否则更新库存数量，并计算费用  
    //属性相关函数，如库存调整、显示库存数量等  
};  

暑假作业汇总
--------
1.C++课程实习  
2.分组编写实验室网页/APP等  
3.待续  

作业提交方式
--------
在自己github中创建仓库（2016_summer）或者fork此仓库。  
每日提交 日期-题号.cpp 文件。  
如 20160726-1.cpp  
  
提交举例：  
powershell/cmd进入当前仓库  
git add 20160726-1.cpp  
git commit -m "20160726"  
git push origin master  

用户名汇总
--------

| 姓名       | 用户名          |
| ---------- | --------------  |
| 李彦俊     | [yanjun0501](https://github.com/yanjun0501)      |
| 李想       | [lixiang521](https://github.com/lixiang521)      |
| 于雷       | [classmateyulei](https://github.com/classmateyulei)  |
| 梁琬琳     | [cherry19970526](https://github.com/cherry19970526)  |
| 李嘉兴     | [645309823](https://github.com/645309823)       |
| 王婷婷     | [wangtingting111](https://github.com/wangtingting111) |
| 龙禹含     | [929624414](https://github.com/929624414)       |
| 薛明奇     | [xuemingqi](https://github.com/xuemingqi)       |
| 金裴阳     | [youngjin1997](https://github.com/youngjin1997)    |
| ...        | ...             |