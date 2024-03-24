#include<iostream>
/*All given decimal or factorial numbers are change to binary form then operation will begin.
output of binary code are change to decimal form or factorial form and that number present on screen. */
using namespace std;
int main()
{
    unsigned int a=60;//binary => 0011 1100.
    unsigned int b=13;//binary => 0000 1101.
    int c;
    c=a&b;// AND operation.
    cout<<"AND operation:"<<c <<endl;
    c=a|b;// OR operation.
    cout<<"OR operation:"<<c <<endl;
    c=a^b;// EXOR operation.
    cout<<"EXOR operation:"<<c <<endl;
    c=~a;// NOT (or) 1s complement operation.
    cout<<"NOT or ONES complement operation:"<<c <<endl;
    c=a<<2;// left shifting operation.(all bits move 2steps to left side)
    cout<<"left shift operation:"<<c <<endl;
    c=a>>2;// right shifting operation.(all bits move 2steps to right side)
    cout<<"right shift operation:"<<c <<endl;
    return 0;
}