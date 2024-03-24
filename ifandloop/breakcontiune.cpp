#include<iostream>
using namespace std;
int main()
{
    int a;
    for (a=0;a<10;a++)
    {
        if (a==5)
        continue;//if a=5 program jump to next step never show the value of current a(5)
        if (a==8)
        break;//if a=8 progamm imediately stop.
        cout<<a<<endl;
    }
    return 0;
}