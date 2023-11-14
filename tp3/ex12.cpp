#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    int codigo;
    string descripcion;
    float precio;
    int stock;
    Nodo * next=nullptr;
};

void crearNodo(Nodo * & inicio,int codigo , string descripcion, float precio, int stock){
    Nodo * nuevo=new Nodo;
    nuevo->codigo=codigo;
    nuevo->descripcion=descripcion;
    nuevo->precio=precio;
    nuevo->stock=stock;
    if (inicio==nullptr){
        inicio=nuevo;
    }
    else{
        nuevo->next=inicio->next;
        inicio->next=nuevo;
    }
}

void cargarDatos(Nodo * & inicio){
    string descripcion; 
    int codigo, stock;
    float precio;
    cout<<"ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<"ingrese la descripcion del producto: ";
    cin>>descripcion;
    cout<<"ingrese el precio del producto: ";
    cin>>precio;
    cout<<"ingrese el stock del producto: ";
    cin>>stock;
    while (codigo!=-1)
    {
        crearNodo(inicio,codigo, descripcion, precio, stock);
        cout<<"ingrese el codigo del producto: ";
        cin>>codigo;
        if (codigo==-1){
            break;
        }
        
        cout<<"ingrese la descripcion del producto: ";
        cin>>descripcion;
        cout<<"ingrese el precio del producto: ";
        cin>>precio;
        cout<<"ingrese el stock del producto: ";
        cin>>stock;
        
    }
    
}

void incrementoPrecio(Nodo* & inicio){
    float porcentaje;
    cout << "Ingrese un porcentaje: ";
    cin >> porcentaje;

    Nodo *aux = inicio;
    while (aux != nullptr){
        
        float nuevoPrecio = aux->precio + (aux->precio * porcentaje / 100);
        aux->precio = nuevoPrecio;

        aux = aux->next;
    }
}

void incrementarStock(Nodo * &inicio){
    int stock,codigo;
    bool existe;
    Nodo* aux=inicio;
    cout<<"ingrese el codigo del producto: ";
    cin>>codigo;
    cout<<"ingrese la cantidad de stock a incrementar: ";
    cin>>stock;
    while (aux!=nullptr){
        if(aux->codigo==codigo){
            aux->stock=aux->stock+stock;
            existe=true;
            break;
        }
        else{
            aux=aux->next;
            existe=false;
        }
    }
    if (!existe){
        cout<<"no se ha encontrado el articulo."<<endl;
    }
}

void eliminarSinStock(Nodo* & inicio) {
    while (inicio != nullptr && inicio->stock == 0) {
        Nodo* temp = inicio;
        inicio = inicio->next;
        delete temp;
    }

    Nodo* current = inicio;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->stock == 0) {
            Nodo* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}

void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<"descrpicion: "<<inicio->descripcion<<endl;
        cout<<"stock: "<<inicio->stock<<endl;
        cout<<"precio: " <<inicio->precio<<endl;
        cout<<"codigo: " <<inicio->codigo<<endl;
        inicio = inicio->next;
    }
    cout<<endl;
    
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
    cargarDatos(inicio);
    /*imprimirLista(inicio);
    cout<<endl;
    incrementoPrecio(inicio);
    imprimirLista(inicio);
    cout<<endl;
    incrementarStock(inicio);
    imprimirLista(inicio);
    cout<<endl;*/
    eliminarSinStock(inicio);
    imprimirLista(inicio);
    borrarHeap(inicio);


return 0;
}