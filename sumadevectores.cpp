#include<iostream>
//Vamos a aprender a hacer arrays(listas no variables)
using namespace std; /*para evitar poner std delante de los cout y cin*/
int main(){
    int vector[5];
    int vector2[5];
    int suma[5];
    int cont;
    int salir;
    for(cont=0;cont<5;cont++){
                            cout<<"dime";
                            cin>>vector[cont];
                            cout<<"vector["<<cont<<"]= "<<vector[cont]<<endl;
    }
    for(cont=0;cont<5;cont++){
                            cout<<"dime";
                            cin>>vector2[cont];
                            cout<<"vector2["<<cont<<"]= "<<vector2[cont]<<endl;
    }
    for(cont=0;cont<5;cont++){
                            suma[cont]=vector[cont]+vector2[cont];
                            cout<<"suma["<<cont<<"]= "<<suma[cont]<<endl;
    }
    
    
    
    cout<<"toca cualquier tecla para salir\n"; /* /n es igual a endl*/
    cin>>salir;
    return 0;
    
}
