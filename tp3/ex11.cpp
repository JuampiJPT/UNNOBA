#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    string palabras;
    Nodo* next=nullptr;
};

void CrearNodoOrdenadoALf(Nodo* & inicio, string palabra) {
    Nodo* nuevo = new Nodo;
    nuevo->palabras = palabra;
    Nodo* aux = inicio;
    if (inicio == nullptr || palabra < inicio->palabras) {
        nuevo->next = inicio;
        inicio = nuevo;
    } else {
        while (aux->next != nullptr && palabra >= aux->next->palabras) {
            aux = aux->next;
        }
        nuevo->next = aux->next;
        aux->next = nuevo;
        
    }
}


void cargarLista(Nodo * & inicio){
    string palabra;
    cout<<"ingrese una palabra: ";
    cin>>palabra;
    while(palabra != "x"){
        CrearNodoOrdenadoALf(inicio, palabra);
        cout<<"ingrese una palabra: ";
        cin>>palabra; 
    }
}

void ordenar(Nodo*  inicio1, Nodo* inicio2, Nodo * & inicio){
    Nodo * aux1=inicio1;
    Nodo * aux2=inicio2;
    string palabra;
    while (aux1!=nullptr){
        palabra=aux1->palabras;
        CrearNodoOrdenadoALf(inicio,palabra);
        aux1=aux1->next;
    }
    while (aux2!=nullptr){
        palabra=aux2->palabras;
        CrearNodoOrdenadoALf(inicio,palabra);
        aux2=aux2->next;
    }
    

}

void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<inicio->palabras<<endl;
        inicio = inicio->next;
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
    Nodo*inicio1=nullptr;
    Nodo*inicio2=nullptr;
    Nodo * inicio=nullptr;
    cargarLista(inicio1);
    cargarLista(inicio2);
    ordenar(inicio1,inicio2,inicio);

    imprimirLista(inicio);
    borrarHeap(inicio);
    borrarHeap(inicio1);
    borrarHeap(inicio2);
return 0;
}