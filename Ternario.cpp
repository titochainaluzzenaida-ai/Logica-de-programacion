#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    string resultado;
    cin>>a;
    
   resultado=a%2==0? "par" : "impar";
   cout<<resultado;
 return 0;
}