/*Basics of pointer*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    bool human=true;
    cout<<"Enter the age:";
    cin>>age;

    int *ageptr=&age;//that mean ageptr=&age
    bool *humanptr=&human;
    cout<<endl<<age<<"-->"<<ageptr<<endl;
    cout<<human<<"-->"<<humanptr<<endl;
    cout<<age<<"-->"<<*ageptr<<endl;
    cout<<human<<"-->"<<*humanptr<<endl;
    return 0;
}