#include <iostream>
#include <fstream> //manejar ficheros
//char es una letra string es la cadena entera numeros y letras pero los trata como palabras y int un numero
using namespace std;
int main(){
    char *lista[5];
    int salir;
    int cont=0;
    char otro='s'; //es s para que la primera vez entrara
    ofstream ficheroagenda("agenda.txt");    // Se abre el archivo para escribir.
    struct{
           string nombre;
           int numero;
           string pelo;
           int edad;
           char sexo;
    }amigo[cont];
    while(otro=='s'){
                     for (cont=0;cont<30;cont++){
                         cout<<"\nDime el nombre: ";
                         cin>>amigo[cont].nombre;
                         cout<<"\nDime el numero: ";
                         cin>>amigo[cont].numero;
                         cout<<"\nDime su color de pelo: ";
                         cin>>amigo[cont].pelo;
                         cout<<"\nDime su edad: ";
                         cin>>amigo[cont].edad;
                         cout<<"\nSu sexo es: ";
                         cin>>amigo[cont].sexo;
                         ficheroagenda<<nombre<<","<<numero<<","<<pelo<<","<<edad<<","<<sexo<<endl;
                         cout<<"Deseas introducir otro amigo";
                         cin>>otro; //si introduces otra cosa a s lo toma como distinto de s y se cierra
                         if(otro=='s'){
                                   cont=cont+1
                         }
                     }
    }
                                  
      
    
    ficheroagenda.close();                     // SE cierra el archivo
    return 0;
    
    
    
}
