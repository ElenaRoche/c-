#include<iostream>
//Vamos a aprender a hacer arrays(listas no variables)
using namespace std; /*para evitar poner std delante de los cout y cin*/
int main(){
    int vector[5]; /*guarda 5 posiciones para 5 numeros enteros*/
    int cont;
    int salir;
    for(cont=0;cont<5;cont++){
                              cout<<"Dime un numero: ";
                              cin>>vector[cont];
    
    }
    cout<<"Mira mi bonito vector relleno: ";
    for(cont=0;cont<5;cont++){
                              cout<<"vector["<<cont<<"]="<<vector[cont]; /*saca vector en la posicion cont=la que toque e imprime por pantalla vector*/
    }
    
    
    
    
    
    cout<<"toca cualquier tecla para salir/n";
    cin>>salir;
    return 0;
    
}
