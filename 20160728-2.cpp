#include<iostream>

using namespace std;

int MonthDay[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

class Date
{
public:
    int year;
    int month;
    int day;
    Date(int Year,int Month,int Day)
    {
        year=Year;
        month=Month;
        day=Day;
    }
    ~Date()
    {
    }
};

class Time
{
public:
    int hour;
    int minute;
    int second;
    Time(int Hour,int Minute,int Second)
    {
        hour=Hour;
        minute=Minute;
        second=Second;
    }
    ~Time()
    {
    }
};

class ElectronicClock : public Date , public Time
{
public:
    ElectronicClock(int Year,int Month,int Day,int Hour,int Minute,int Second):Date(Year,Month,Day),Time(Hour,Minute,Second){}
    void Judge()
    {
        if(year <= 0||month <= 0||day <= 0||hour <= 0||minute <= 0||second <= 0||month>12||hour>12||minute>60||second>60)
        {
            cout<<"´íÎó"<<endl;
        }
        if(month==2)
        {
            int temp;
            if((year%4==0&&year%100!=0)||year%400==0)
                temp=29;
            else
                temp=28;
            if(day>temp)
            {
                cout<<"´íÎó"<<endl;
            }
        }
        else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            if(day>31)
            {
                cout<<"´íÎó"<<endl;
            }
        }
        else
        {
            if(day>30)
            {
                cout<<"´íÎó"<<endl;
            }
        }
    }
    void chyear(int num)
    {
        year+=num;
    }
    void chmonth(int num)
    {
        month+=num;
        if(month>12)
        {
            chyear(month/12);
            month%=12;
            if(month==0)
                month=12;
        }
    }
    void chday(int num)
    {
        int temp;
        day+=num;
        while(day>MonthDay[month])
        {
            if(((year%4==0&&year%100!=0)||year%400==0)&&month==2)
                temp=29;
            else
                temp=MonthDay[month];
                day-=temp;
                chmonth(1);
            }
    }
    void chsecond(int num)
    {
        second+=num;
        if(second>=60)
        {
            chminute(second/60);
            second%=60;
        }
    }
    void chminute(int num)
    {
        minute+=num;
        if(minute>=60)
        {
            chhour(minute/60);
            minute%=60;
        }
    }
    void chhour(int num)
    {
        hour+=num;
        if(hour>=24)
        {
            chday(hour/24);
            hour%=24;
        }
    }
    ~ElectronicClock()
    {
    }
};

int main()
{
	ElectronicClock one(1997,1,1,1,1,1);
	return 0;
}
