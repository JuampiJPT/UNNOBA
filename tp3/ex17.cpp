#include <iostream>
#include <string>
using namespace std;

struct Nodo
{
    string palabra;
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
void cargarDatos(Nodo* & fin){
    string palabra;
    cout<<"ingrese una palabra: ";
    cin>> palabra;
    while (palabra != "0")
    {
        Nodo* nuevo= new Nodo;
        nuevo->palabra=palabra;
        cargarInicio(fin,nuevo);
        cout<<"ingrese una palabra: ";
        cin>> palabra;
    }
}

Nodo* buscar_posicion(Nodo* fin, int posicion){
    if (fin!= nullptr)
    {
        int cantidadNodos=0;
        Nodo * contador=fin->next;
        do
        {
            cantidadNodos+=1;
            contador=contador->next;
        } while (contador !=fin->next);
        if (cantidadNodos>=posicion){
            int iteraciones=0;
            Nodo * aux=fin;
            do
            {
                aux=aux->next;
                iteraciones+=1;
                if (iteraciones==posicion-1)
                {
                    return aux;
                }
                
            } while (aux!=fin);
        }
        
        else
        {
            cout<<"la posicion indicada no existe"<<endl;
            return nullptr;
        }
    }
    else{
        cout<<"la lista esta vacia. "<<endl;
        return nullptr;
    }
}

void insertar_despues(Nodo* anterior, string palabra){
    if (anterior != nullptr)
    {
        Nodo * nuevo= new Nodo;
        nuevo->palabra=palabra;
        nuevo->next=anterior->next;
        anterior->next=nuevo;
    }
    else
    {
        cout<<"no existe el lugar para insertarlo.";
    }
}


void imprimir (Nodo * fin){
    
    if(fin != nullptr){
        Nodo* aux=fin->next;
        do{
            cout<<aux->palabra<<endl;
            aux=aux->next;
            
        } while (aux != fin->next);
        
    }

}



main(){
    Nodo * fin = nullptr;
    Nodo * anterior=nullptr;
    cargarDatos(fin);
    imprimir(fin);
    cout<<endl; 
    cout<<endl;
    anterior=buscar_posicion(fin,2);
    insertar_despues(anterior,"perro");
    imprimir(fin); 

return 0;
}