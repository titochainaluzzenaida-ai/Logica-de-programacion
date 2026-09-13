#include <iostream>
using namespace std;

int main()
{
    int num1, num2, mayor, menor;
    cout << "ingrese dos numeros:";
    cin>>num1>>num2;
    mayor= num1;
    menor=num1;
    (num2>num1)&&(mayor=num2);
    (num2<num1)&&(menor=num2);
    cout << "El numero mayor es:";
    cout<<mayor;
    cout << "El numero menor es:";
    cout<<menor;
    return 0;
}
