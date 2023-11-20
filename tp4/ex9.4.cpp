#include <iostream>
#include <string>
using namespace std;

string rotar(string palabra, int inicio) {
    if (inicio < 0) {
        return "";
    }

    return palabra[inicio] + rotar(palabra, inicio - 1);
}


bool palindromo (string palabra){
int inicio= palabra.length()-1;
if(palabra== rotar(palabra,inicio)){
    return true;
}
else
{
    return false;
}


}



main(){
    string palabra="arbol";
    if (palindromo(palabra))
    {
        cout<<"es un palindromo"<<endl;
    }
    else
    {
        cout<<"no es un palindromo"<<endl;
    }
    
    

return 0;
}