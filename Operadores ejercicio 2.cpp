#include<iostream>
using namespace std;

int main() 
{
    int A,B,C;
    A=5;
    B=10;
    C=(A++ + ++B)*2;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<A<<endl;
    return 0;
}
