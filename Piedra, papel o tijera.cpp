#include <iostream>  
using namespace std;
int main() {
    
   int a,computadora;
    cout<<"ELIGE"<<endl<<"1)Piedra"<<endl<<"2)Papel"<<endl<<"3)Tijera"<<endl;
    cin>>a;
    computadora = rand() % 3 + 1;
    cout << "La computadora eligio: "<<computadora<<endl;
    if (a==computadora)
    {
    cout<<"Empate"<<endl;
    }
    if (a==1 && computadora==3 ||a==3 && computadora==2||a==2 && computadora==1)
    {
    cout << "Ganaste"<<endl;
    }
    if (a==1 && computadora==2|| a==2 && computadora==3||a==3 && computadora==1)
    {
    cout<<"Perdiste"<<endl;
    }
    return 0;
}

