/*Creating student database using nested structure and function*/
#include<iostream>
#include<string.h>
using namespace std;
struct address
{
    string door="1/163,North street,kullursandai,virudhunagar.";
};
struct student
{
    char name[20];
    int Rollno;
    int Averagemark;
    address addr;    
};

//int ave(int);
int main()
{
    struct student data;
    cout<<"Enter the Student name:";
    cin>>data.name;
    cout<<endl<<"Enter the Roll number:";
    cin>>data.Rollno;
    //int a=ave(data.Averagemark);
    //cout<<data.Averagemark;
    cout<<data.name<<endl;
    cout<<data.Rollno<<endl;
    cout<<data.addr.door;
    return 0;
}
/*int ave(int x)
{
    int i,num,sum=0;
    int mark[num];
    
    cout<<"Enter the number of subject:";
    cin>>num;
    for (i=0;i<num;i++)
    {
        cout<<"Enter the "<<i+1<<"th "<<"sub mark out of 100:";
        cin>>mark[i];
        sum=(sum+mark[i]);
    }
    x=(sum/num);
    return x;
}*/