#include <iostream>
#include <string>
using namespace std;

int calculadorPotencia (int numero, int exponente){
    if(numero == 0){
        return 0;
    }
    if (exponente==0)
    {
        return 1;
    }
    if (exponente==1)
    {
        return numero;
    }
    return numero * calculadorPotencia(numero, exponente-1); 
    
    
}


main(){
    cout<<calculadorPotencia(5,3);

return 0;
}