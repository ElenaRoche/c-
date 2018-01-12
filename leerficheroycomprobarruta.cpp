//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string linea;
    int salir;
    ifstream fichero("tiFichero.txt");//brir un fichero para leerlo. Entre comillas el nombre de la ruta si esta en el escritorio puedes poner solo el nombre del fichero(directorio raiz)*//* Busca la ruta que yo ponga, Lee del disco duro reserva un trozo de la memoria ram memoria dinamica lo llama fichero y lo vuelca, lo escribe en la memoria dinamica pero lo lee del disco duro.*/
    if(fichero.fail()==1){//para comprobar que la ruta es correcta
                                 cout<<"ERROR.No existe la ruta";
                                 cin>>salir;
                                 exit(1);//cerrar sin acabar el programa
    }
    while(fichero.eof()==0){ //para cuando no sabemos cuantas lineas son //ficheroeof() va al punto del fichero que me tocaria leer y si lo ultimo que leo es el final del fichero fichero.eof devuelve 1
           getline(fichero,linea);//leer linea a linea y lo guarda en la variable linea
           cout<<linea<<endl;//muestra por pantalla la linea guardada en linea (solo una)
    }
    fichero.close(); //no haría falta porque no escribimos solo leemos. con ofstream si porque asi creamos la copia que guarda en el disco duro
    cin>>salir;
    return 0;
}
