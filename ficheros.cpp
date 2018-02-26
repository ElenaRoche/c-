//FICHEROS
#include<iostream>
#include<fstream> //para leer ficheros

using namespace std;

int main(){
    int salir;
    ofstream fichero("miFichero.txt"); //.txt fichero con letras 
    /* va a la memoria ram y coge un trozo y guarda en código asci o como se diga*/
    fichero<<"En un lugar de la Mancha"<<endl; //salto de linea
    fichero<<"de cuyo nombre no quiero...";
    fichero.close();/*verifica que hay espacio en el disco duro y graba uno a uno y cero a cero el contenido del fichero en el disco duro en la ruta que hemos creado antes. Libera la memoria del ram y el fichero queda guardado en el disco duro.*/
    cout<<"Ya esta. Fichero cerrado";
    cin>>salir;
    std::cout<<"toca cualquier tecla para salir\n";
    
    return 0;
}
