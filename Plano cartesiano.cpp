#include <iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    if (x>0 && y>0)
    {
        cout<<"Primer cuadrante";
    }
    if (x<0 && y>0)
    {
        cout<<"Segundo cuadrante";
    }
    if (x<0 && y<0)
    {
        cout<<"Tercer cuadrante";
    }
    if (x>0 && y<0)
    {
        cout<<"Cuarto cuadrante";
    }
    return 0;

}

