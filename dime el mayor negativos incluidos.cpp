#include<iostream> /*libreria de cabecera que contiene la informacion para sacar e introdicir en pantlla*/
/*Este programa sirve para leer por teclado 10 numeros enteros y devolver el mayor*/
int main(){
    /*Deficinición de variables*/
    int cont;
    int numero;
    int mayor;
    int salir;
    /*Bucle de tipo for*/
    mayor=numero;
    for(cont=1;cont<=10;cont++){
    /*cont=1 para que empiece por el 1*/
    /*cont entrara mientras sea menor o igual a 10*/
    /*cont=cont+1 para que vaya de uno en uno es decir va a ir sumando 1 */
    /*cont= cont+ == cont++*/
    /*for cont=10;cont mayor o igual a 0;cont-- para ir restando de uno en uno es deicr una cuenta atras*/
            std::cout<<"·Dime un numero entero: ";
            std::cin>>numero;
            if(numero>mayor){
                             mayor=numero;
            }
    }
    std::cout<<"El mayores es: "<<mayor;
    
    
    
    
    
    std::cout<<"toca cualquier tecla para salir/n";
    std::cin>>salir;
    return 0;
    
}
