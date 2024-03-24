/*void pointer is nothing but generic pointer
normally variable data type is must same forpointer data type but, void pointer is expected from these rule*/
#include<iostream>
using namespace std;
int main()
{
    int num=30;
    int *intptr;
    void *voidptr;
    voidptr=&num;
    intptr=(int *)voidptr;//typecasting
    cout<<*intptr<<endl;
    return 0;
}