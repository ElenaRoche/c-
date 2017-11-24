#include<iostream>
//Vamos a aprender a hacer arrays(listas no variables)
using namespace std; /*para evitar poner std delante de los cout y cin*/
int main(){
    int vector[5]; /*guarda 5 posiciones para 5 numeros enteros*/
    int cont;
    int salir;
    int suma=0;
    for(cont=0;cont<5;cont++){
                              cout<<"Dime un numero: ";
                              cin>>vector[cont];
    
    }
    for(cont=0;cont<5;cont++){
                              cout<<"vector["<<cont<<"]="<<vector[cont]<<endl; /*saca vector en la posicion cont=la que toque e imprime por pantalla vector*/
    }
    //Ahora sumamos
    cout<<"\nLa suma vale: ";
    for(cont=0;cont<5;cont++){
                              suma=suma+vector[cont];
    }    
                              cout<<suma;
    
    
    
    
    
    cout<<"toca cualquier tecla para salir\n"; /* /n es igual a endl*/
    cin>>salir;
    return 0;
    
}
