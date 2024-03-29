#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    int numero;
    Nodo * next=nullptr;
};

void cargarInicio (Nodo * & fin, Nodo * & nuevo){
    if (fin == nullptr){
        fin=nuevo;
        nuevo->next=nuevo;
    }
    else
    {
        nuevo->next=fin->next;
        fin->next=nuevo;
    }   
}

void cargarFinal (Nodo * & fin, Nodo * & nuevo){
    if (fin == nullptr){
        fin=nuevo;
        nuevo->next=nuevo;
    }
    else
    {
        nuevo->next=fin->next;
        fin->next=nuevo;
        fin=nuevo; //hacemos que el final apunte al ultimo
    }   
}


void cargarDatos(Nodo* & fin){
    int numero;
    cout<<"ingrese un numero: ";
    cin>> numero;
    while (numero != 0)
    {
        Nodo* nuevo= new Nodo;
        nuevo->numero=numero;
        cargarFinal(fin,nuevo);
        cout<<"ingrese un numero: ";
        cin>> numero;
    }
    
}


void imprimir (Nodo * fin){
    
    if(fin != nullptr){
        Nodo* aux=fin->next;
        do{
            cout<<aux->numero<<endl;
            aux=aux->next;
            
        } while (aux != fin->next);
        
    }

}



main(){
    Nodo * fin=nullptr;
    cargarDatos(fin);
    imprimir(fin);

return 0;
}