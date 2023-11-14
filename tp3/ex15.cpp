#include <iostream>
#include <string>
using namespace std;

struct Info
{
    string patente;
    int sensor;
    int velocidad;
};



struct Nodo
{
    Info automovil;
    Nodo * next=nullptr;
};

void ordenarAlfabetoYSensor(Nodo *&inicio, Nodo *&nuevo) {
    if (inicio == nullptr || inicio->automovil.patente > nuevo->automovil.patente ||
        (inicio->automovil.patente == nuevo->automovil.patente && inicio->automovil.sensor > nuevo->automovil.sensor)) {
        nuevo->next = inicio;
        inicio = nuevo;
    } else {
        Nodo *aux = inicio;
        while (aux->next != nullptr &&
               (aux->next->automovil.patente < nuevo->automovil.patente ||
                (aux->next->automovil.patente == nuevo->automovil.patente &&
                 aux->next->automovil.sensor < nuevo->automovil.sensor))) {
            aux = aux->next;
        }

        nuevo->next = aux->next;
        aux->next = nuevo;
    }
}


void cargarDatos(Nodo * & inicio){
    string patente;
    int sensor, velocidad;
    cout<<"ingrese una patente (termina con aaa99): ";
    cin>>patente;
    while (patente != "aaa99")
    {
        cout<<"ingrese un sensor (sur: 1 / medio : 2 / norte: 3): ";
        cin>>sensor;
        cout<<"ingrese la velocidad: ";
        cin>>velocidad;
        Nodo * nuevo= new Nodo;
        nuevo->automovil.patente=patente;
        nuevo->automovil.sensor=sensor;
        nuevo->automovil.velocidad=velocidad;
        ordenarAlfabetoYSensor(inicio,nuevo);
        cout<<"ingrese una patente (termina con aaa99): ";
        cin>>patente;
    }
}

void separar (Nodo * & inicio, Nodo * & sur , Nodo * & medio , Nodo * & norte){
    Nodo * aux = inicio;
    while (aux != nullptr)
    {
        Nodo *  copia = new Nodo;
        copia->automovil=aux->automovil;
        copia->next=nullptr;
        switch (aux->automovil.sensor)
        {
        case 1:
            
            ordenarAlfabetoYSensor(sur,copia);
            break;
        
        case 2:
            
            ordenarAlfabetoYSensor(medio,copia);
            break;
        case 3:
            
            ordenarAlfabetoYSensor(norte,copia);
            break;
        }
        aux=aux->next;
    }
    
}


void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<"patente: "<<inicio->automovil.patente<<" sensor: "<<inicio->automovil.sensor <<endl;
        inicio = inicio->next;
    }
    cout<<endl;   
}

main(){
    Nodo * inicio= nullptr;
    Nodo * sur = nullptr;
    Nodo * medio = nullptr;
    Nodo * norte = nullptr;
    cargarDatos(inicio);
    imprimirLista(inicio);
    separar(inicio,sur,medio,norte);
    cout<<"sur: "<<endl;
    imprimirLista(sur);
    cout<<"medio: "<<endl;
    imprimirLista(medio);
    cout<<"norte: "<<endl;
    imprimirLista(norte);

return 0;
}