#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if (a>0 && b>0)
    {
        cout<<"Primer cuadrante";
    }
    if (a<0 && b>0)
    {
        cout<<"Segundo cuadrante";
    }
    if (a<0 && b<0)
    {
        cout<<"Tercer cuadrante";
    }
    if (a>0 && b<0)
    {
        cout<<"Cuarto cuadrante";
    }
    return 0;

}

