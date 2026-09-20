#include <iostream>
using namespace std;
int main ()
{
  int a,b,c;
  cin>>a>>b>>c;
  if (a==b && b==c)
  {
  cout<<"Equilatero";
  }
  else if (a==b||b==c||c==a)
  {
  cout<<"Isosceles";
  }
  else
  {
  cout<<"Escaleno";
  }
  return 0;
}

