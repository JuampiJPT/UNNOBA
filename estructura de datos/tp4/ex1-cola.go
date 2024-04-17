package main

import "fmt"

//cola

type Nodo struct{
	valor int;
	next *Nodo;
}

type Cola struct{
	start *Nodo;
	end *Nodo;
}

func (C *Cola) encolar (value int){
	var nuevo = &Nodo {
		valor : value,
		next : nil,
	}
	if C.isEmpty (){
		C.end=nuevo;
		C.start=nuevo;
	}else{
		C.start.next=nuevo;
		C.start=nuevo;
	}
} 

func (C *Cola) isEmpty () bool {
	if C.end == nil {
		return true;
	}
	return false;
}

func (C *Cola) desencolar (){
	C.end=C.end.next;
	if C.end== nil{
		C.start=nil;
	}

}

func (C *Cola) imprimir (cola Cola){
	aux := cola;
	for  aux.end != nil {
		fmt.Println(aux.end.valor);
		aux.end=aux.end.next;
	}
}

 func main(){

	var cola Cola
	cola.encolar(4);
	cola.encolar(2);
	cola.encolar(6);
	cola.encolar(5);

	cola.imprimir(cola);

	cola.desencolar();
	
	fmt.Println("test");

	cola.imprimir(cola);

	
	
	

}



