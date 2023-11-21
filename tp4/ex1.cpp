#include <iostream>
#include <string>
using namespace std;

int inverso (int numero, int resultado = 0){
    if(numero < 10){
        return resultado=resultado * 10 + numero;
    }
    resultado = (resultado * 10) + (numero % 10);
    return inverso(numero / 10, resultado); 
}
main(){
    int resultado;
    cout<< inverso (12345,resultado);

return 0;
}