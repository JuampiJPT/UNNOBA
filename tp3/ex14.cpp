#include <iostream>
#include <string>
using namespace std;

struct Nota
{
    int matematicas;
    int geografia;
    int literatura;
};

struct Alumno{
    int legajo;
    string apellidoYnombre;
    int dni;
    Nota nota;
};

struct Nodo{
    Alumno alumno;
    Nodo * next=nullptr;
};

void crearNodo (Nodo * & colegio, int legajo, string apellidoYnombre, int dni, Nota nota){
    Nodo * nuevo=new Nodo;
    nuevo->alumno.legajo=legajo;
    nuevo->alumno.apellidoYnombre=apellidoYnombre;
    nuevo->alumno.dni=dni;
    nuevo->alumno.nota=nota;
    if (colegio == nullptr){
        colegio=nuevo;
    }
    else{
        nuevo->next=colegio->next;
        colegio->next=nuevo;        
    }  
}

void verificarNota (int & materia){
    while (materia<1 || materia>10 ){
        cout<<"ingrese una nota dentro del rango: ";
        cin>>materia;
    }
    
}

void cargarNotas (Nota & nota){
    int matematicas;
    int geografia;
    int literatura;
    cout<<"matematicas: ";
    cin>> matematicas;
    verificarNota(matematicas);
    nota.matematicas=matematicas;
    cout<< "geografia: ";
    cin>> geografia;
    verificarNota(geografia);
    nota.geografia=geografia;
    cout<< "literatura: ";
    cin>> literatura;
    verificarNota(literatura);
    nota.literatura=literatura;

};


void crearLista (Nodo * & colegio, int & CantidadAlumnos){
    int legajo;
    string apellidoYnombre;
    int dni;
    Nota nota;
    cout<<"ingrese el legajo: ";
    cin>>legajo;
    while (legajo != -1){
        cout<<"ingrese el apellido y el nombre: ";
        getline(cin>>ws, apellidoYnombre);
        cout<<"ingrese el dni: ";
        cin>>dni;
        cout<<"ingrese las notas: ";
        cargarNotas (nota);
        crearNodo(colegio,legajo,apellidoYnombre,dni,nota);
        CantidadAlumnos++;
        cout<<"ingrese el legajo: ";
        cin>>legajo;
    }
}

void aprobados(Nodo * colegio, int cantidadAlumnos){
    int aprobados=0;
    float porcentaje;
    Nodo*aux=colegio;
    while (aux!=nullptr)
    {
        if (aux->alumno.nota.geografia>7 && aux->alumno.nota.literatura>7 && aux->alumno.nota.matematicas>7){
            aprobados++;
        }
        aux=aux->next;
    }
    cout<<aprobados<<" alumnos aprobaron las 3 materias."<<endl;
    porcentaje=aprobados*100;
    porcentaje=porcentaje/cantidadAlumnos;
    cout<<"corresponde al "<<porcentaje<<" porciento del alumnado."<<endl;
}

void imprimirLista(Nodo* inicio){
    while (inicio != nullptr){
        cout<<"nombre: " <<inicio->alumno.apellidoYnombre<<endl;
        cout<<"matematicas: "<<inicio->alumno.nota.matematicas<<endl;
        inicio = inicio->next;
    }
    cout<<endl;   
}





main(){
Nodo * colegio=nullptr;
int cantidadAlumnos=0;
crearLista(colegio,cantidadAlumnos);
imprimirLista(colegio);
aprobados(colegio, cantidadAlumnos);


return 0;
}