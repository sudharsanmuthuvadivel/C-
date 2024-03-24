#include<iostream>
using namespace std;
//**************Operator Overloading ++  *************
class Time
{
private:
    int hours;
    int minute;
public: 
    Time(int h,int m)
    {
        hours=h;
        minute=m;
    }
    void operator++()//operator....which operator like ++ or -- ect.
    {
        minute++;
        if (minute>=60)
        {
            hours++;
            minute -=60;
        }
    }
    void operator++(int)//when postincrement are used that dummy int passed(like 0)
    {
        minute++;
        if (minute>=60)
        {
            hours++;
            minute -=60;
        }
    }
    void displaytime()
    {
        cout<<hours<<":"<<minute;
    }
};
int main()
{
    Time t1(6,30);
    //operator overloading.
    ++t1;//t1.addtime();.......++t1 ('pre increment' and unary operator(single variable))
    t1++;//....................t1++(post increment)......(binary operator mean =,+,-......eg: a=b, a+b)
    t1.displaytime();
    return 0;
}

