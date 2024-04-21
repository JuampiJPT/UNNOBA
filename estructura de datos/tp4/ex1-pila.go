package main

import "fmt"

type Nodo struct {
	valor int; 
	next *Nodo; 
}

type Pila struct{
	tope *Nodo;
	contador int;
	
}

func NuevaPila() *Pila {
	return &Pila{
		tope:  nil,
		contador: 0, // Inicializar contador en cero
	}
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
	P.contador++;
}

func (P *Pila) desapilar (){
	if P.tope != nil {
		P.tope=P.tope.next;
		P.contador--;
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
	fmt.Println("La cantidad de elementos es:",pila.contador);
	pila.desapilar();
	fmt.Println("test");
	pila.imprimir(pila);
	fmt.Println("La cantidad de elementos es:",pila.contador);
	
}