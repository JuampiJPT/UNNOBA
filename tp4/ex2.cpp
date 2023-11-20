#include <iostream>
#include <string>
using namespace std;

int cantDigitos(int numero, int digito = 0) {
    if (numero == 0) {
        return digito;
    }

    return cantDigitos(numero / 10, digito + 1);
}



main(){
    int digito;
    cout<< cantDigitos(100, digito);

return 0;
}