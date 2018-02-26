#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n1;
    int a;
    int salir;
    int suma=0;
    int digito;
    int digito2;
    int digito3;
    int suma_2=0;
    int n_cifras=0;
    
    cout<<"Escribe un numero: "<<endl;
    cin>>n1;
    cout<<"1. Devuelve la suma de sus cifras pares"<<endl;
    cout<<"2. Devuelve la suma de sus cifras impares"<<endl;
    cout<<"3. Devuelve la mayor de sus cifras"<<endl;
    cout<<"4. Devuelve un número con las mismas cifras ordenadas de menor a mayor"<<endl;
    cout<<"5. Salir"<<endl;
    switch (n1)

case 1:
     digito=n1%10;
     n1=n1/10;
     if(n1%2==0){
                if(digito%2==0){
                                suma=n1+digito;
                                
                }
                else{
                     suma=suma+n1;
                }
     }
     else{
          if(digito%2==0){
                          suma=suma+digito;
          }
          else{
               suma=suma;
          }
     }
     cout<<suma;
     return 0;
     break;
case 2: 
     digito2=n1%10;
     n1=n1/10;
     if(n1%2!=0){
                if(digito2%2!=0){
                                suma_2=n1+digito2;
                                
                }
                else{
                     suma_2=suma_2+n1;
                }
     }
     else{
          if(digito2%2!=0){
                          suma_2=suma_2+digito2;
          }
          else{
               suma_2=suma_2;
          }
     }
     cout<<suma_2;
     return 0;     
     break;
case 3: 
     if(n1>10){
               digito3=n1%10;
               if(digito3>n_cifras){
                                    n_cifras=digito3
                                    cout<<n_cifras;
               }
               n1=n1/10;
     }
     else{
          cout<<n1
     }
     return 0;
     
     break;
case 4:
     if(n1>10){
               digito4=n1%10;
               if(digito4>n_cifras2){
                                     n_cifras2=digito4
                                     cout<<n_cifras;
               }
               n1=n1/10;
                                     
     }
     
     break;
    std::cout<<"toca cualquier tecla para salir/n";
    std::cin>>salir;
    return 0;
    
}
