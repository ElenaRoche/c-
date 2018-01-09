#include <iostream>
#include <fstream> //manejar ficheros
//char es una letra string es la cadena entera numeros y letras pero los trata como palabras y int un numero
using namespace std;
int main(){
    char otro='s'; //es s para que la primera vez entrara
    ofstream ficheroagenda("agenda.txt");    // Se abre el archivo para escribir.
    string nombre;
    string numero;
    while(otro=='s'){
                     cout<<"Dime el nombre : ";
                     cin>>nombre;
                     cout<<"Dime el numero: ";
                     cin>>numero;
                     ficheroagenda<<nombre<<","<<numero<<endl;
                     cout<<"Deseas introducir otro amigo";
                     cin>>otro; //si introduces otra cosa a s lo toma como distinto de s y se cierra
    }
                     
    
    
    ficheroagenda.close();                     // SE cierra el archivo
    return 0;
}
