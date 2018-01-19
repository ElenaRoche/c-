#include<iostream>
#include<string>
using namespace std;
int main(){
    struct menu{
           string primerplato;
           string segundoplato;
           string postre;
           int calorias;
           
    };
    int cont;
    int salir;
    int suma=0;
    menu dia[5];
    for(cont=0;cont<5;cont++){
                              cout<<"MENU ESCOLAR"<<cont<<endl;
                              cout<<"Introduce el primer plato: ";
                              cin>>dia[cont].primerplato;
                              cout<<"Introduce el segundo plato: ";
                              cin>>dia[cont].segundoplato;
                              cout<<"Introduce el postre: ";
                              cin>>dia[cont].postre;
                              cout<<"Introduce las calorias: ";
                              cin>>dia[cont].calorias;
    }
    cout<<"LAS CALORIAS DE LA SEMANA SON: ";
    for(cont=0;cont<5;cont++){
         suma=suma+dia[cont].calorias;
    }
    cout<<suma<<endl;
    cout<<"Toca una tecla para salir";
    cin>>salir;
}
