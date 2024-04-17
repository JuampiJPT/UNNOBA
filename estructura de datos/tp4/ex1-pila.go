package main

import "fmt"

type Nodo struct {
	valor int; 
	next *Nodo; 
}

type Pila struct{
	tope *Nodo;
	
}

func (P *Pila) apilar (valor int){
	var nuevo = &Nodo{
		valor: valor,
		next: nil,
	}
	if P.tope == nil {
		P.tope=nuevo;
		
	}else{

		nuevo.next=P.tope;
		P.tope=nuevo;
	}
}

func (P *Pila) desapilar (){
	if P.tope != nil {
		P.tope=P.tope.next;
	}
}

func (P *Pila) imprimir (pila Pila){
	aux := pila;
	for  aux.tope != nil {
		fmt.Println(aux.tope.valor);
		aux.tope=aux.tope.next;
	}
}

func main(){
	var pila Pila
	pila.apilar(4);
	pila.apilar(5);
	pila.apilar(6);
	pila.imprimir(pila);
	pila.desapilar();
	fmt.Println("test");
	pila.imprimir(pila);
}