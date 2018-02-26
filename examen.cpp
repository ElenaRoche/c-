#include <iostream>
#include <fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    int salir;
    int cont;
    struct persona{
           string nombre;
           string apellido;
           int posicion[2][4];
           int nota;
           int fil;
           int col;
    };
    persona alumno[8];
    for(cont=0;cont<8;cont++){
                              cout<<"DATOS Alumno"<<cont<<endl;
                              cout<<"Como se llama: ";
                              cin>>alumno[cont].nombre;
                              cout<<"Cual es su apellido: ";
                              cin>>alumno[cont].apellido;
                              cout<<"cual es su nota: ";
                              cin>>alumno[cont].nota;
                              cout<<"posicion ";
                              for(int fil=0;fil<2;fil++){
                                      for(int col=0;col<4;col++){
                                      cin>>alumno[cont].posicion[col];
                                      cin>>alumno[cont].posicion[fill];
                                      }
                                      cin
                              }
    }
    cout<<"lista de alumnos"<<endl;
    for(cont=0;cont<3;cont++){
    cout<<"el alumno"<<alumno[cont].nombre<<"cuyo apellido es "<<alumno[cont].apellido<<" tiene una nota "<<alumno[cont].nota<< "se sienta en la posicion"<<alumno[cont].posicion[fil][col]<<endl;
    
    cout<<"toca cualquier tecla para salir"<<endl;
    cin>>salir;
    return 0;
}
                              
    










printf("\nToca cualquier tecla: ");
scanf("%i",&salir);
return 0;
}
