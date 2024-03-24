/*Given a Grade with respect to mark by using else if.*/
#include<iostream>

using namespace std;
int main()
{
    int mark;
    cout<<"Please Enter Your Mark:"<<endl;
    cin>>mark;
    if(mark>=90 && mark<=100)
    {//for single statement {} is not required even else if.
        cout<<"Your Grade is A"<<endl;
    }
    else if (mark>=80 && mark<90)
    {
        cout<<"Your Grade is B"<<endl;
    }
    else if (mark>=70 && mark<80)
    {
        cout<<"Your Grade is C"<<endl;
    }
    else if (mark>=60 && mark<70)
    {
        cout<<"Your Grade is D"<<endl;
    }
    else if (mark>=50 && mark<60)
    {
        cout<<"Your Grade is E"<<endl;
    }
    else if (mark<50)
    
        cout<<"Your Grade if F"<<endl;
    
    else
    {
        cout<<"You are entered Invalid number please try again.";
    }
    
    return 0;
}