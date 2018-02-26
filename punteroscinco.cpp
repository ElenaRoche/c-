//Manejo de memoria a bajo nivel o punteros
//Programas sobre manejo de memoria
#include<stdio.h>/*libreria para sacar cosas por pantalla antes de iostream no existe namespace tampoco cout ni cin*/
int main(){
    int salir;
    int a=3;//dos variables en dos posiciones
    int b=2;
    printf("direccion de a = %x\n",&a);//& significa la direccion de memoria a. numero exadecimal, letras y numeros combinados. sacaremos por pantalla su direccion en la memoria ram /*reserva sitio para guardar el numero entero*/
    printf("direccion de b = %x",&a+1);//cada numero ocupa 4 bits,%x para sacar un numero exadecimal
    printf("direccion de a = %x",&a+2);
    scanf("%c",&salir);//% tipo de dato, c caracter
    
}
