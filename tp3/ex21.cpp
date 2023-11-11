#include <iostream>
#include <string>
using namespace std;
struct Jugador
{
    string nombre;
    int puntaje;
    int raza;
};


struct Nodo
{
    Jugador jugador;
    Nodo* next=nullptr;
};

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


void comprobarRaza(int & raza){
    while (raza<1 || raza>3)
    {
        cout<<"ingrese un tipo de raza  1 es mago, 2 es guerrero, 3 es elfo : ";
        cin>>raza;
    }
}

void imprimirCaracteristica(int raza){
    switch (raza)
    {
    case 1:
        cout<<"1 punto de sanación por cada 5 de daño recibido"<<endl;
        break;
    case 2:
        cout<<"20% más de daño infligido"<<endl;
        break;
    case 3:
        cout<<"capacidad de resucitar a un compañero a cambio de 200 puntos"<<endl;
    break;
    }
}



void cargarLista(Nodo * & fin){
    int cantidad=0;
    string nombre;
    int raza,puntaje;
    cout<<"ingrese el nombre de usurario: ";
    getline(cin>> ws, nombre);
    while (nombre != "0")
    {
        cout<<"ingrese un tipo de raza  1 es mago, 2 es guerrero, 3 es elfo : ";
        cin>>raza;
        comprobarRaza(raza);
        imprimirCaracteristica(raza);
        cout<<"ingrese un puntaje: ";
        cin>>puntaje;
        Nodo * nuevo= new Nodo;
        nuevo->jugador.nombre=nombre;
        nuevo->jugador.raza=raza;
        nuevo->jugador.puntaje=puntaje;
        cargarFinal(fin, nuevo);
        cout<<"ingrese el nombre de usurario: ";
        getline(cin>> ws, nombre);
    }
}

void restarPuntaje (Nodo *  fin){
    if (fin!=nullptr)
    {
        int puntaje;
        int raza;
        cout<<"ingrese una cantidad de puntaje a restar: ";
        cin>>puntaje;
        cout<<"ingrese la raza: ";
        cin>>raza;
        comprobarRaza(raza);
        Nodo * aux=fin->next;
        do
        {
            if (aux->jugador.raza==raza)
            {
                aux->jugador.puntaje=aux->jugador.puntaje-puntaje;
            }
            aux=aux->next;
            
        } while (aux!=fin->next);
    }
}

void imprimir(Nodo * fin){
    if (fin!=nullptr)
    {
        Nodo * aux= fin->next;
        do
        {
            cout<<"nombre: "<<aux->jugador.nombre<<" puntaje: "<<aux->jugador.puntaje<<endl;
            aux=aux->next;
        } while (aux!=fin->next);
        
    }
    
}






main(){
Nodo * fin=nullptr;
cargarLista(fin);
imprimir(fin);
cout<<endl;
restarPuntaje(fin);
imprimir(fin);

return 0;
}