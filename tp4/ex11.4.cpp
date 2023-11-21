#include <iostream>
#include <string>
using namespace std;


int impar (int arreglo[], int dimensionLog, int contador=0){
    if (dimensionLog==0 or dimensionLog==contador)
    {
        return 0;
    
    
    }
     else if (arreglo[contador]%2==1)
     {
        return arreglo[contador];
     }
      
    
    
    contador++;
    dimensionLog--;
    return impar(arreglo, dimensionLog, contador);
    
}



main(){
int arreglo[5]={2,2,4,4,2};
int dimensionLog=5;
int contador=0;
cout<<impar(arreglo,dimensionLog,contador)<<endl;
return 0;
}
