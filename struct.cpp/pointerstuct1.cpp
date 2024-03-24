/*creating nested structure and creating pointer inside the structure*/
#include<iostream>
#include<string.h>
using namespace std;

struct address
{
    int doornumber;
    string area;
};
struct student
{
    int rollnum;
    string name;
    address *addr;//nested struct but represented by pointer.
};
int main()
{
    student data;
    data.name ="sudharsan";
    data.rollnum=5647;
    cout<<data.name<<endl;
    cout<<data.rollnum<<endl;
//creating variable for datapointer from structure.
    address adr={98,"virudhunagar"};//data assingning
    data.addr=&adr;//dataptr mention *addr and addr store adr address
//main func variable ptr the structure ptr then members. 
    cout<<data.addr->doornumber<<endl;
    cout<<data.addr->area<<endl;  
    cout<<"size of struct student"<<sizeof(data.rollnum)<<endl;
    cout<<"size of struct student"<<sizeof(data.name)<<endl;
    cout<<"size of struct student"<<sizeof(data.addr->area)<<endl;
    return 0;
}
  

