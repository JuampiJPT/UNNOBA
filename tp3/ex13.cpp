#include <iostream>
#include <string>
using namespace std;

struct Producto
{
    int codigo;
    int cantVentas=0;
};

struct Nodo{
    Producto producto;
    Nodo* next=nullptr;
};

void crearNodo(Nodo * & sucursal, int codigo, int cantVentas){
    
    Nodo * nuevo=new Nodo;
    nuevo->producto.codigo=codigo;
    nuevo->producto.cantVentas=cantVentas;
    if (sucursal == nullptr || codigo < sucursal->producto.codigo){
        nuevo->next = sucursal;
        sucursal = nuevo;
    }
    else
    {
        Nodo* aux = sucursal;
        while (aux->next != nullptr && aux->next->producto.codigo < codigo) {
            aux = aux->next;
        }
        nuevo->next = aux->next;
        aux->next = nuevo;
    }
}

void crearLista(Nodo * & sucursal){
    int codigo, cantVentas;
    cout<<"ingrese el codigo del producto: ";
    cin>>codigo;
    while(codigo!= -1){
        cout<<"ingrese la cantidad de ventas: ";
        cin>>cantVentas;
        crearNodo(sucursal,codigo,cantVentas);
        cout<<"ingrese el codigo del producto: ";
        cin>>codigo;
    }
}


void unirLista(Nodo * & sucursal1,Nodo * & sucursal2, Nodo * & ventas ){
    Producto producto;
    while (sucursal1!=nullptr){
        producto=sucursal1->producto;
        crearNodo(ventas,producto.codigo,producto.cantVentas);
        sucursal1=sucursal1->next;
    }
    while (sucursal2!=nullptr){
        producto=sucursal2->producto;
        crearNodo(ventas,producto.codigo,producto.cantVentas);
        sucursal2=sucursal2->next;
    }
}

void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<inicio->producto.codigo<<endl;
        inicio = inicio->next;
    }
    cout<<endl;   
}




main(){
    Nodo * sucursal1=nullptr;
    Nodo * sucursal2=nullptr;
    Nodo * unidos = nullptr;
    crearLista(sucursal1);
    crearLista(sucursal2);
    cout<<endl;
    cout<<endl;
    imprimirLista(sucursal1);
    cout<<endl;
    cout<<endl;
    imprimirLista(sucursal2);
    unirLista(sucursal1,sucursal2,unidos);
    cout<<endl;
    cout<<endl;
    imprimirLista(unidos);

return 0;
}