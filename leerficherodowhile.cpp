//Lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string linea;
    int salir;
    string ruta;
    int repetir=0;//variable interruptura 
    cout<<"Dime la ruta del fichero: "; 
    getline(cin,ruta);
    ifstream fichero(ruta.c_str());//entre comillas para la ruta directamente sin comillas con una variable. coge el contenido de ruta
    do{//do while 
       
       if(fichero.fail()==1){//para comprobar que la ruta es correcta
                                    cout<<"ERROR.No existe la ruta"<<endl;
                                    cout<<"Dime la ruta del fichero: "; 
                                    getline(cin,ruta);
                                    ifstream fichero(ruta.c_str());//entre comillas para la ruta directamente sin comillas con una variable. coge el contenido de ruta
                                    repetir=1;//si esta mal repetir vale 1
       }else{//para salir del bucle
             repetir=0;//si no esta mal repetir vale  y no repite
       }
    }while(repetir==1);//para repetir lo de pedir la ruta hasta que meta una correcta
    while(fichero.eof()==0){ //para cuando no sabemos cuantas lineas son //ficheroeof() va al punto del fichero que me tocaria leer y si lo ultimo que leo es el final del fichero fichero.eof devuelve 1
           getline(fichero,linea);//leer linea a linea y lo guarda en la variable linea
           cout<<linea<<endl;//muestra por pantalla la linea guardada en linea (solo una)
    }
    fichero.close(); //no haría falta porque no escribimos solo leemos. con ofstream si porque asi creamos la copia que guarda en el disco duro
    cin>>salir;
    return 0;
}
