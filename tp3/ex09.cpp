#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    int numero;
    Nodo* next=nullptr;
};

void crearNodo(Nodo*&inicio, int numero){
    Nodo * nuevo= new Nodo;
    nuevo->numero=numero;
    Nodo* aux=inicio;
    
    if (inicio==nullptr){
        inicio=nuevo;
    }
    else
    {
        while (aux != nullptr) {
    if (nuevo->numero > aux->numero) {
        nuevo->next = aux;
        inicio = nuevo; 
        break;}
        
        else if (aux->next == nullptr || nuevo->numero > aux->next->numero) {
        nuevo->next = aux->next;
        aux->next = nuevo;
        break;}
    aux = aux->next;}

    }
}

void CargarDescescendente (Nodo * & inicio){
    int numero;
    do{
        cout<<"ingrese un numero distinto a 0: ";
        cin>>numero;
        crearNodo(inicio,numero);  
    }
    while (numero!=0);    
}

void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<inicio->numero<<endl;
        inicio = inicio->next;
    }
    
}

void eliminarOucrrenciaXTres(Nodo* & inicio){
    Nodo* aux=inicio->next;
    while(inicio->numero%3==0)
    {
        inicio=inicio->next;
    }
    while(aux!=nullptr){
    if (aux->next!=nullptr && aux->next->numero%3==0){
        aux->next=aux->next->next;
    }
    else
    {
        aux=aux->next;
    }
}

}

void borrarHeap (Nodo* & inicio){
    Nodo * aux=inicio;
    while(inicio!=nullptr && inicio->next!=nullptr){
        inicio=inicio->next;
        delete aux;
        aux=inicio;
    }
    delete inicio;
}

main(){
    Nodo* inicio=nullptr;
    CargarDescescendente(inicio);
    imprimirLista(inicio);
    eliminarOucrrenciaXTres(inicio);
    imprimirLista(inicio);
    borrarHeap(inicio);
return 0;
}