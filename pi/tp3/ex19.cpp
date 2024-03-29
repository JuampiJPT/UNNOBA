#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    int cuit;
    Nodo * next= nullptr;
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

void cargarLista(Nodo * & fin){
    int cuit;
    cout<<"ingrese el numero de cuit del proveedor: ";
    cin>>cuit;
    while (cuit != 0)   
    {
        Nodo * nuevo= new Nodo;
        nuevo->cuit=cuit;
        cargarFinal(fin, nuevo);
        cout<<"ingrese el numero de cuit del proveedor: ";
        cin>>cuit;
    }  
}

void eliminarProveedor (Nodo * & fin){
    bool existe=false;
    int cuit;
    cout<<"ingrese un cuit: ";
    cin>> cuit;
    if (fin != nullptr)
    {
        Nodo * aux=fin;
        do
        {
            if (aux->next->cuit==cuit)
            {
                Nodo * copia= aux->next;
                aux->next=aux->next->next;
                delete copia;
                existe=true;
                cout<<"el proveedor fue eliminado."<<endl;
                break;
            }
            aux=aux->next;
            
        } while (aux!=fin);
        if (!existe)
        {
            cout<<"ese proveedor no figura en el listado."<<endl;
        }
        
    }
    else
    {
        cout<<"la lista esta vacia"<<endl;
    }
    
}


void imprimir (Nodo * fin){
    
    if(fin != nullptr){
        Nodo* aux=fin->next;
        do{
            cout<<aux->cuit<<endl;
            aux=aux->next;
            
        } while (aux != fin->next);
        
    }

}

main(){
    Nodo * fin=nullptr;
    cargarLista(fin);
    cout<<endl;
    imprimir(fin);
    cout<<endl;
    eliminarProveedor(fin);
    imprimir(fin);

return 0;
}