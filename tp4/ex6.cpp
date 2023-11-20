#include <iostream>
#include <string>
using namespace std;

int multiplicacion(int numero, int multiplicando){
    if (multiplicando == 0)
    {
        return 0;
    }
    return numero + multiplicacion(numero , multiplicando-1);
}


main(){
    cout<<multiplicacion(6,2);

return 0;
}