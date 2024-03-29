#include <iostream>
#include <string>
using namespace std;

int sumaArreglo (int arreglo[], int dimensionLog, int suma){
    if (dimensionLog==0)
    {
        return suma;
    }
    suma+= arreglo[dimensionLog-1];
    return sumaArreglo(arreglo,dimensionLog-1,suma);
}




main(){
    int arreglo[4]={};
    int dimensionLog=4;
    int suma=0;
    cout<<sumaArreglo(arreglo,dimensionLog,suma)<<endl;

return 0;
}