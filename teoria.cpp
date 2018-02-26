#
int x;//numero entero
float; //numero decimal
char; //letra
int x[10] //en lugar de una posicion de memoria son 10 seguidas, es una rai, vector
string letra; //vector de letras
char letra[10]; // vector de letras, 10 posiciones
//estructura es como una rai, un vector pero en lugar de tener todos los datos iguales son distintos una palabra y un numero, dos numeros y dos palabras...
struct{
       string nombre;
       int edad;
}persona;//declaro que va a ser una persona. Estamos cogiendo de la memoria ram un trozo para guardar el nombre y otro para la edad en posiciones contiguas. y al conjunto de variable y edad lo llamo persona
persona.nombre="Pepito";
persona.edad="18";

//podemos definir un nuevo tipo de datos
