#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int numero;
    char otro='s';
    int mayor=0;
    int salir;
    while(otro=='s'){
           cout<<"dime";
           cin>>numero;
           if(numero>mayor){
                            mayor=numero;
           }
           cout<<"seguir";
           cin>>otro;
    }
    cout<<"el mayor es: "<<mayor<<endl;
                 
    
    cout<<"toca cualquier tecla para salir\n"; /* /n es igual a endl*/
    cin>>salir;
    return 0;
}
