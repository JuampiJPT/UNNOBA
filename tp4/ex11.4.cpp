#include <iostream>
#include <string>
using namespace std;


int impar (int arreglo[], int dimensionLog){
    if (arreglo[dimensionLog-1]%2==1)
    {
        return arreglo[dimensionLog-1];
    }
    return impar(arreglo, dimensionLog-1);
    
}



main(){
int arreglo[5]={2,4,5,4,8};
int dimensionLog=4;
cout<<impar(arreglo,dimensionLog)<<endl;
return 0;
}
