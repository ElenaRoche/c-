#include<iostream>
using namespace std;
int main(){
    int vector[5]; /*guarda 5 posiciones para 5 numeros enteros*/
    int vector2[5];
    int suma[5];
    int cont;
    int salir;
    for(int cont=0;cont<5;cont++){
                              cout<<"vector["<<cont<<"]= ";
                              cin>>vector[cont];
    }
    for(int cont=0;cont<5;cont++){
                              cout<<"vector2["<<cont<<"]= ";
                              cin>>vector2[cont];
    }
    for(int cont=0;cont<5;cont++){
                              suma[cont]=vector[cont]+vector2[cont];
    }    
    //Mostramo el vector por pantalla
    for (int cont=0;cont<5;cont++){
        if(cont==4){
                    cout<<"["<<suma[cont]<<"]";
        }
        if (cont!=0 && cont!=4){
                     cout<<suma[cont]<<",";
        }
    }
         
    
    
    
    std::cout<<"toca cualquier tecla para salir/n";
    std::cin>>salir;
    return 0;
    
}
