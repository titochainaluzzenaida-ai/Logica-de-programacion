#include <iostream>
#include <string>
using namespace std;
int main()
{
    int nota1,nota2;
    string a,b;
    cin>>a>>nota1>>b>>nota2;
    if (nota1>nota2)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }

    return 0;
}

