#include <iostream>
using namespace std;
int main ()
{
int a;
cin>>a;
if (a>0 && a<=3)
{
cout<<"bebe";
}
if (a>3 && a<=14)
{
cout<<"niño";
}
if (a>14 && a<=18)
{
cout << "joven";
}
if (a>18 && a<=65)
{
cout<<"adulto";
}
if(a>65)
{
cout<<"adulto de la tercera edad";
}
return 0;
}

