#include<iostream>

int main(){
    /*Esto es un comentario que ocupa más de una linea del p*/
    //Esto es un comentario de una linea
    /*Definicion de variable*/
    int a;
    int b;
    int c;
    int solucion,salir;
    //Inicializacion de variables
    a=2;
    b=4;
    c=-1;
    solucion=a+b+c;
    std::cout<<"La solucion es: "<<solucion << std::endl;
    /*endl para que lo encriba en una linea distinta*/
    /*"n\n\nLA SOLUCION..." aparecera en la linea 3*/
    std::cout<<"Para seguir, toca culaquier tecla";
    std::cin>> salir;
    return 0;
    
}
