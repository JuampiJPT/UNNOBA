#include <iostream>
#include <string>
using namespace std;

int sumaCuadrados (int numero , int suma = 0 ){
    if (numero==1)
    {
        return suma= suma+1;
    }
    return sumaCuadrados(numero-1, suma + (numero*numero));
    
}



main(){
    int suma;
    cout<<sumaCuadrados(5,suma);

return 0;
}