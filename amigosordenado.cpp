//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int medida(char aux[]){//int porque medida va a devolver unnumero entero
    int l=0;
    while(aux[l]!='\0'){
                        l++;
    }
    return l;
}

int main(){
    char *lista[5]; //pasar de punteros a letras con* Reservo hueco para cinco amigos
    int salir;
    char aux[15];
    int l;
    int cont;
    int nveces;// el proceso de coger uno de los nombres y moverlo hasta su posicion hay que hacer 4 veces.
    char *pauxiliar; //es una variable que permite guardar punteros que apuntan a una letra
    for(cont=0;cont<5;cont++){
                              printf("\nNombre amigo %i: ",cont);//%i para que sepa que el amigo que toca es el 1,2...
                              scanf("%s",aux);//aux es un vector de 15 letras donde guardamos provisionalmente el nombre de mi amigo 
                              l=medida(aux);
                              printf("\n%i",l);
                              lista[cont]=(char *) malloc(l*sizeof(char));//(char *) para asegurarnos de que escribe el puntero bien. reservar la memoria necesaria. malloc asigna el espacio necesario
                              strcpy(lista[cont],aux);//coge una cadena que esta en una posicion de memoria y copia directamente la palabra entera a otra posicion de memoria
    }
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
    }
    //ORDENAMIENTO
    for(nveces=1;nveces<5;nveces++){
                                   for(cont=0;cont<4;cont++){
                                                             if(*lista[cont]>*lista[cont+1]){//*lista[0] es contenido de lista 0 y 1 pero ponemos cont para ir letra por letra entre los 3 nombres
                                                                                                         pauxiliar=lista[cont];
                                                                                                         lista[cont]=lista[cont+1];
                                                                                                         lista[cont+1]=pauxiliar;
                                                              }
                                   }
    }
     //DESPUES DEL ORDENAMIENTO
    printf("\nLISTA ORDENADA: ");
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
    }
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}

