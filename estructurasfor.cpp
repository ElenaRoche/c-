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
    int cont;
    int salir;
    persona amigo[3];
    for(cont=0;cont<3;cont++){
                              cout<<"DATOS AMIGO"<<cont<<endl;
                              cout<<"Como se llama tu amigo: ";
                              cin>>amigo[cont].nombre;
                              cout<<"Cuántos años tiene: ";
                              cin>>amigo[cont].edad;
                              cout<<"De que color tiene el pelo: ";
                              cin>>amigo[cont].colorPelo;
                             
    }
    cout<<"MIS AMIGOS SON: "<<endl;
    for(cont=0;cont<3;cont++){
    cout<<"mi amigo se llama "<<amigo[cont].nombre<<" tiene "<<amigo[cont].edad<<" y su pelo es de color de pelo es "<<amigo[cont].colorPelo;
    cout<<"Toca una tecla para salir";
    cin>>salir;
    }
}
