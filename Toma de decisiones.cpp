#include <iostream>
using namespace std;
int main()
{
int a,b,m,n,par,impar;
cin>>a>>b;
if (a+b==5)
{
b+=3;
m=(2*a)+b;
cout<<m;
}
else
{
    --a;
    n=(7*a)+b;
    if (n%2==0)
    {
    par=a-b;
   
    cout<<par;
    }
    else
    {
    impar=a*b;
    cout<<impar;
    }
return 0;
}
}

