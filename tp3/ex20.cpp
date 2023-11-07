#include <iostream>
#include <string>
using namespace std;

struct Proceso{
    int PID;
    string nombreDeUsuario;
    int segundos;
    int fecha;
};

struct Nodo{
    Proceso proceso;
    Nodo* next=nullptr;
};

void cargarInicio(Nodo * & fin, Nodo * & nuevo){
    if (fin != nullptr){
        nuevo->next=nuevo;
        fin=nuevo;
    }
    else{
        nuevo->next=fin->next;
        fin->next=nuevo;
    }
}

void cargarDatos(Nodo * & fin){
    int PID, segundos,fecha;
    string nombre;
    cout<<"ingrese el PID: ";
    cin>>PID;
    while (PID != 0){
        cout<<"ingrese nombre de usuario: ";
        getline(cin>> ws, nombre);
        cout<<"ingrese el segundos: ";
        cin>>PID; 
        cout<<"ingrese el fecha(DDMM): ";
        cin>>fecha;
        Nodo * nuevo= new Nodo;
        nuevo->proceso.PID=PID;
        nuevo->proceso.nombreDeUsuario=nombre;
        nuevo->proceso.segundos=segundos;
        nuevo->proceso.fecha=fecha;
        cargarInicio(fin,nuevo);
        cout<<"ingrese el PID: ";
        cin>>PID;   
    }
}

void aumentarPID (Nodo * & fin){
    bool existe=false;
    int PID, cantSeg;
    cout<<"ingrese un PID: ";
    cin>>PID;
    cout<<"ingrese cantidad de segundos a aumentar: ";
    cin>> cantSeg;
    if (fin != nullptr){
        Nodo * aux= fin->next;
        do{
            if (aux->proceso.PID==PID){
                aux->proceso.PID+=cantSeg;
                existe=true;
            }
            aux=aux->next;
            
        } while (aux!=fin->next);
        if(!existe){
            cout<<"no existe PID "<<PID;
        }
    }else
    {
        cout<<"la lista esta vacia :(";
    }
}

void 





main(){

return 0;
}