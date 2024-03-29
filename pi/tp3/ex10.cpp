#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    string palabras;
    Nodo * next=nullptr;
};

void minuscula (string & palabra){
    for (int i = 0; i < palabra.length(); i++)
    {
        palabra[i]=tolower(palabra[i]);
    }  
}

void crearNodo(Nodo*& inicio, string palabra){
    Nodo * nuevo= new Nodo;
    nuevo->palabras=palabra; 
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
    string palabra;
    cout<<"ingrese una palabra, la carga terminara con la x: ";
    cin>>palabra;
    while (palabra!="x")
    {   
        minuscula(palabra);
        crearNodo(inicio, palabra);
        cout<<"ingrese una palabra, la carga terminara con la x: ";
        cin>>palabra;
    }
}

void repetidas(Nodo* inicio, Nodo* &inicioR) {
    Nodo* aux1 = inicio;
    Nodo* aux2;

    while (aux1 != nullptr) {
        aux2 = aux1->next;
        
        while (aux2 != nullptr) {
            if (aux1->palabras == aux2->palabras) {
                if (inicioR == nullptr) {
                    inicioR = new Nodo;
                    inicioR->palabras = aux1->palabras;
                    Nodo* copia = inicioR;
                    while (copia->next != nullptr) {
                        copia = copia->next;
                    }
                    copia->next = new Nodo;
                    copia->next->palabras = aux2->palabras;
                } else {
                    Nodo* copia = inicioR;
                    bool found = false;
                    while (copia != nullptr) {
                        if (copia->palabras == aux1->palabras || copia->palabras == aux2->palabras) {
                            found = true;
                            break;
                        }
                        copia = copia->next;
                    }
                    if (!found) {
                        copia = inicioR;
                        while (copia->next != nullptr) {
                            copia = copia->next;
                        }
                        copia->next = new Nodo;
                        copia->next->palabras = aux1->palabras;
                        copia->next->next = new Nodo;
                        copia->next->next->palabras = aux2->palabras;
                    }
                }
            }
            aux2 = aux2->next;
        }
        
        aux1 = aux1->next;
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
    Nodo* inicio=nullptr;
    Nodo* inicioR=nullptr;
    cargarLista(inicio);
    imprimirLista(inicio);
    cout<<"cambio"<<endl;
    repetidas(inicio,inicioR);
    imprimirLista(inicioR);
    borrarHeap(inicio);
    borrarHeap(inicioR);

return 0;
}