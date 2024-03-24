/*creating nested structure and creating pointer inside the structure
and ptr in main function*/
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
    student *dataptr;//using ptr in mainfunction.
    dataptr = &data;
    dataptr->name ="sudharsan";
    dataptr->rollnum=5647;
    cout<<dataptr->name<<endl;
    cout<<dataptr->rollnum<<endl;
//creating variable for datapointer from structure.
    address adr={98,"virudhunagar"};//data assingning
    dataptr->addr=&adr;//dataptr mention *addr and addr store adr address
//main func variable ptr the structure ptr then members. 
    cout<<dataptr->addr->doornumber<<endl;
    cout<<dataptr->addr->area<<endl;  
    return 0;
}
  

