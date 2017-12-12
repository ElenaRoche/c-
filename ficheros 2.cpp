//FICHEROS
#include<iostream>
#include<fstream> //para leer ficheros

using namespace std;

int main(){
    int salir;
    string mensaje;
    ifstream fichero("miFichero.txt"); 
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close();//no es obligatorio
    cin>>salir;
    
    return 0;
}
