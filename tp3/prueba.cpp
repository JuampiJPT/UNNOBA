#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    string dato;
    Nodo * next=nullptr;
};

void insertarAlfabeto (Nodo * & inicio, Nodo * & nuevo){
    if (inicio==nullptr || nuevo->dato[0] < inicio->dato[0]){
        nuevo->next=inicio;
        inicio=nuevo;
    }
    else
    {
        Nodo * aux = inicio;
        while (aux->next != nullptr && nuevo->dato[0] > aux->next->dato[0])
        {
            aux=aux->next;
        }
        nuevo->next=aux->next;
        aux->next=nuevo;
    }
}

void cargarDatos (Nodo * & inicio){
    string dato;
    cout<<"ingrese un dato: ";
    cin>>dato;
    while(dato!= "0"){
        Nodo * nuevo= new Nodo;
        nuevo->dato=dato;
        insertarAlfabeto(inicio,nuevo);
        cout<<"ingrese un dato: ";
        cin>>dato;
    }
}

void merge(Nodo*& inicio, Nodo*& inicio1, Nodo*& inicio2) {
    

    while (inicio1 != nullptr) {
        Nodo* nuevo = inicio1;
        inicio1 = inicio1->next;
        insertarAlfabeto(inicio, nuevo);
    }
   

    while (inicio2 != nullptr) {
        Nodo* nuevo = inicio2;
        inicio2 = inicio2->next;
        insertarAlfabeto(inicio, nuevo);
    }
}

void imprimir (Nodo * inicio){
    Nodo * aux= inicio;
    while(aux!=nullptr){
        cout<<aux->dato<<endl;
        aux=aux->next;
    }
}


main(){

    Nodo * inicio=nullptr;
    Nodo * inicio1=nullptr;
    Nodo * inicio2=nullptr;
    cargarDatos(inicio1);
    cargarDatos(inicio2);
    cout<<"lista 1: "<<endl;
    imprimir(inicio1);
    cout<<"lista 2: "<<endl;
    imprimir(inicio2);
    cout<<endl;
    merge(inicio,inicio1, inicio2);
    imprimir(inicio);
    cout<<"lista 1:";
    imprimir(inicio1);
    cout<<endl;
    imprimir(inicio2);

    



return 0;
}