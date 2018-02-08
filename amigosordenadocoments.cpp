//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){//el whil es para que vaya contando hasta qeu llegue al fianl de la cadena 
    l++;
            }
            return l;
}

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     char *pauxiliar;
     int l;
     int nveces;
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
        l=medida(aux);
        lista[cont]=(char *) malloc(l*sizeof(char)); // malloc asigna solo el eespcaioo q necesita
        printf("\nHe encontrado huedo en la posición %x",lista[cont]);
        strcpy(lista[cont],aux);
        printf("\nHe copiado el nombre de %s y tienen %i letras",lista[cont],l);
     }
     //ordenar
     for (nveces=1; nveces<5;nveces++){
            for(cont=0;cont<4;cont++){
                      if(*lista[cont]>*lista[cont+1]) {
                              printf("\nCambia %s por %s",lista[cont],lista[cont+1]);
                              pauxiliar=lista[cont];
                              lista[cont]=lista[cont+1];
                              lista[cont+1]=pauxiliar;  
                      }
            }
     }
     //despues del ordenamiebnto
     printf("\nlista ordenada:");
     for(cont=0;cont<5;cont++){
                   printf("\n%s",lista[cont]);
     }    
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
