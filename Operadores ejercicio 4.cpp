#include<iostream>
using namespace std;

int main()
{
    int x,y;
    y=4;
    x=4;
    y=++x;
    x=(x++ + ++y);
    cout <<x<< endl;
    cout <<y<< endl;
    return 0;
}
