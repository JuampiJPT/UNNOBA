#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    string titulo;
    Nodo * next=nullptr;
};

void insertarFinal(Nodo * & fin, Nodo * & nuevo){
    if (fin == nullptr)
    {
        nuevo->next=nuevo;
        fin=nuevo;
    }
    else
    {
        nuevo->next=fin->next;
        fin->next=nuevo;
        fin=nuevo;
    }
}

void capitalize(string & titulo){
    for (int i = 0; i < titulo.length(); i++)
    {
        if(i==0){
            titulo[i]=toupper(titulo[i]);
        }
        else
        {
            titulo[i]=tolower(titulo[i]);
        }
        
    }
    
}

void cargarLista(Nodo* & fin){
    string titulo;
    cout<<"ingrese un titulo: ";
    getline(cin>> ws, titulo);
    capitalize(titulo);
    while (titulo != "0")   
    {
        Nodo * nuevo= new Nodo;
        nuevo->titulo=titulo;
        insertarFinal(fin,nuevo);
        cout<<"ingrese un titulo: ";
        getline(cin>> ws, titulo);
        capitalize(titulo);
    }
}

void imprimir(Nodo * & fin){
    if (fin != nullptr)
    {
        Nodo * aux= fin->next;
        do
        {
            cout<<aux->titulo<<endl;
            aux=aux->next;
        } while (aux!=fin->next);
        
    }
}

void informarExistencia(Nodo *  fin){
    if (fin!=nullptr)
    {
        Nodo * aux=fin->next;
        string titulo;
        bool existe=false;
        cout<<"ingrese titulo a buscar: ";
        getline(cin>> ws, titulo);
        capitalize(titulo);
        do
        {
            if (aux->titulo==titulo)
            {
                cout<<"el titulo seleccionado existe."<<endl;
                existe=true;
                break;
            }
            aux=aux->next;
            
        } while (aux != fin->next);
        if (!existe)
        {
            cout<<"el titulo no existe dentro de la lista."<<endl;
        }
        
    
    }
    else
    {
        cout<<"la lista esta vacia."<<endl;
    }
    
    
}

main(){
    Nodo * fin= nullptr;
    cargarLista(fin);
    imprimir(fin);
    cout<<endl;
    informarExistencia(fin);


return 0;
}