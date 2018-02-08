//Manejo de punteros
#include<stdio.h>
#include<stdlib.h>

int main(){
    char *lista[3]; //pasar de punteros a letras con*
    int salir;
    //malloc memory allocation le dice a la memoria ram que busque un hueco del tamaño que queremos. me va a decir q partir de que numero decas se puede ocupar
    //malloc buca el tamaño libre para guardar melchor
    lista[0]=(char *) malloc(8*sizeof(char));// le obliga a que lo que meta ahi lo que le estas pidiendo no otro numero que produciria un error generalizado
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);//coger informacion por teclado. lo que tecleamos se guarda en una parte de la memoria ram llamada buffer del teclado %c una letra %i uantro bloques de memoria y lo interpreta como un numero entero
    printf("\nSegundo rey mago: ");/*coge lo que ha leido del buffer y lo escribe en la direccion lista 0 char mallor... y escribe hasta barra cero. lista [0] es direccion*/
    scanf("%s",lista[1]);//%s lee letra por letra hasta que ecuentra barra cero. es un string
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nLOS TRES REYES MAGOS SON: ");
    printf("%s, ",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s",lista[2]);
    printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
