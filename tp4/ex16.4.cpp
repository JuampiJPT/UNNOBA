#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    int num;
    Nodo * next=nullptr;
};

void crearNodo(Nodo*& inicio, int numero){
    Nodo * nuevo= new Nodo;
    nuevo->num=numero; 
    if(inicio==nullptr){
        inicio=nuevo;
    }
    else
    {
        nuevo->next=inicio;
        inicio=nuevo;
    }
}

void cargarLista(Nodo* & inicio){
    int numero;
    cout<<"ingrese un numero:  ";
    cin>>numero;
    while (numero != 0)
    {   
        
        crearNodo(inicio, numero);
        cout<<"ingrese un numero:  ";
        cin>>numero;
    }
}





bool tienenMismaLongitud(Nodo* aux1, Nodo* aux2) {
    // Si ambos nodos son nullptr, las listas tienen la misma longitud.
    if (aux1 == nullptr && aux2 == nullptr) {
        return true;
    }

    // Si uno de los nodos es nullptr y el otro no, las listas tienen longitudes diferentes.
    if (aux1 == nullptr || aux2 == nullptr) {
        return false;
    }

    // Ambos nodos no son nullptr, continuar con la llamada recursiva.
    return tienenMismaLongitud(aux1->next, aux2->next);
}


main(){
    Nodo * aux1=nullptr;
    Nodo * aux2=nullptr;
    
    cargarLista(aux1);
    cargarLista(aux2);
    if (tienenMismaLongitud(aux1,aux2))
    {
        cout<<"tienen la misma longitud";
    }
else
{
    cout<<"no tienen la misma longitud";
}

    



return 0;
}