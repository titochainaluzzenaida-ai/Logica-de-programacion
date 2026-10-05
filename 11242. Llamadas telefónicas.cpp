#include <iostream>
using namespace std;
int main ()
{
int clave,numin;
cin>>clave>>numin;
switch (clave)
{
case 12:cout<<numin*2;break;
case 15:cout<<numin*2.2;break;
case 18:cout<<numin*4.5;break;
case 19:cout<<numin*3.5;break;
case 23:cout<<numin*6;break;
case 25:cout<<numin*6;break;
case 29:cout<<numin*5;break;
default:cout<<"Ingrese una clave correcta";
}
  return 0;
}

