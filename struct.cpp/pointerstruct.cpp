/*creating nested structure and using pointer*/
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
    address addr;
};
void printscreen(struct student *);
int main()
{
    student data;
    student *dataptr;
    dataptr = &data;
    dataptr->name ="sudharsan";
    dataptr->rollnum=5647;
    dataptr->addr.doornumber=56;
    dataptr->addr.area="virudhunagar"; 
    printscreen(&data);
    return 0;
}
 void printscreen(struct student *data)
 {
    cout<<data->name<<endl;
    cout<<data->rollnum<<endl;  
    cout<<data->addr.doornumber<<endl;
    cout<<data->addr.area<<endl;
 }
    

