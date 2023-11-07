#include <iostream>
#include <string>
using namespace std;
//sin terminar
struct Info{
    string sensor;
    string patente;
    int velocidad;
};


struct Nodo{
    Info lectura;
    Nodo * next=nullptr;
};



void crearNodo (Nodo * & inicio,string sensor, string patente, int velocidad){
    Info lectura;
    lectura.patente=patente;
    lectura.sensor=sensor;
    lectura.velocidad=velocidad;
    Nodo * nuevo=new Nodo;
    nuevo->lectura=lectura;
    if (inicio==nullptr){
        inicio=nuevo;
    }
    else {
        if (nuevo->lectura.patente[0] < inicio->lectura.patente[0]) {
            nuevo->next = inicio;
            inicio = nuevo; // El nuevo nodo se convierte en el nuevo inicio
        } else {
            Nodo *aux = inicio;
            while (aux->next != nullptr && (aux->next->lectura.patente < nuevo->lectura.patente 
            || (aux->next->lectura.patente == nuevo->lectura.patente && aux->next->lectura.sensor < nuevo->lectura.sensor))) {
                aux = aux->next;
            }
            nuevo->next = aux->next;
            aux->next = nuevo;
        }
    }
}


void crearLista(Nodo* & inicio) {
    string sensor, patente; 
    int velocidad;
    cout << "Ingrese la patente, la carga finaliza con 'aaa99': ";
    cin >> patente;
    while (patente != "aaa99") {
        cout << "Ingrese el sensor (norte, sur o medio): ";
        cin >> sensor;
        cout << "Ingrese la velocidad de la medición: ";
        cin >> velocidad;
        crearNodo(inicio, sensor, patente, velocidad);
        cout << "Ingrese la patente, la carga finaliza con 'aaa99': ";
        cin >> patente;                           
    }
}


void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<"patente: " <<inicio->lectura.patente<<endl;
        cout<<"medicion: "<<inicio->lectura.sensor<<endl;
        inicio = inicio->next;
    }
    cout<<endl;   
}



main(){
    Nodo * inicio= nullptr;
    crearLista(inicio);
    imprimirLista(inicio);
    

return 0;
}