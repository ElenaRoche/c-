#include<iostream>
int main(){
    /*Este programa sirve para leer tres numero enteros y devolver el mayor*/
    int n1,n2,n3;
    int salir;
    int mayor;
    std::cout<<"Escribel el primer numero: ";
    std::cin>>n1;
    std::cout<<"Escribel el segundo numero: ";
    std::cin>>n2;
    std::cout<<"Escribel el tercer numero: ";
    std::cin>>n3;
    if(n1>n2){
              if(n1>n3){
                        mayor=n1;    
              }else{
                    mayor=n3;
                       
              }      
    }
    else{
         if(n2>n3){
                   mayor=n2;
         }
         else{
              mayor=n3;
         }
    }
    std::cout<<"El mayor es "<<mayor;
    std::cout<<"Toca cualquier letra ";
    std::cin>>salir;
    return 0;
    
}
