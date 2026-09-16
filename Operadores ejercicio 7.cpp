#include <iostream>
using namespace std;
int main () 
{
    int A,B,C;
    A = 7;
    B = 3;
    C = A * 2 + B % 2;
    A = A + B * 3 - C / 2;
    B = C % 3 + A / 2;
    cout<< A<<endl;
    cout<< B<<endl;
    cout<< C<<endl;
    return 0;
}
