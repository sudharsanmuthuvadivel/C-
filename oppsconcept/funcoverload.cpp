/*Function over loading is important for opps concept and its not applicable in "C"
Function overloading means we can use function name in multiple times for different operation but 'parameter is must differrent.*/
//exaple ..finding absolute value for different data type using func overloading.
#include <iostream>
using  namespace std;
int absl(int);
double absl(double);
long absl(long);
int main()
{
    int a=-5;
    cout<<"abs of interger:"<<absl(a)<<endl;
    double d=-9.0;
    cout<<"abs of double:"<<absl(d)<<endl;
    long l=-8l;
    cout<<"abs of long:"<<absl(l)<<endl;
    return 0;
}
int absl(int a)//(int a)... that int a is a parameter passing..so it will different for fucn overloading.
{
    return a<0? -a:a;
}
double absl(double a)//parameter double but same function name.
{
    return a<0? -a:a;
}
long absl(long a)//passing parameter is long
{
    return a<0? -a:a;
}