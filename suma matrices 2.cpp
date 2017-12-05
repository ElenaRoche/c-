//SUMA DE MATRICES
#include<iostream>
using namespace std;

int main(){
    int salir;
    int matriz_1[2][2];
    int matriz_2[2][2];
    int matriz_suma[2][2];
    for (int fil=0;fil<2;fil++){
        for(int col=0;col<2;col++){
                matriz_suma[fil][col]=matriz_1[fil][col]+matriz_2[fil][col];
        }
    }
    
    
    
    
    
    
    cout<<"toca cualquier tecla para salir/n";
    cin>>salir;
    return 0;
}
