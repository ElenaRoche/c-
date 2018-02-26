//ESTE PROGRAMA TRATA SOBRE ESTRUCTURAS
#include<iostream>
#include<string>
using namespace std;
int main(){
    //Declaro un nuevo tipo de dato
    struct persona{
           string nombre;
           int edad;
           char colorPelo;
    };
    //declaro una variable de tipo persona
    persona amigo1; //si hubiera mas amigos poner debajo: persona amigo2, (debajo) persona amigo3...
    persona amigo2;
    persona amigo3;
    cout<<"Como se llama tu amigo: ";
    cin>>amigo1.nombre;
    cout<<"Cuántos años tiene: ";
    cin>>amigo1.edad;
    cout<<"De que color tiene el pelo: ";
    cin>>amigo1.colorPelo;
    
}
