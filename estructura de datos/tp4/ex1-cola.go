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
	contador int; 
}

func NuevaCola() *Cola {
	return &Cola{
		start:    nil,
		end:      nil,
		contador: 0, // Inicializar contador en cero
	}
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
	C.contador++;
} 

func (C *Cola) isEmpty () bool {
	if C.end == nil {
		return true;
	}
	return false;
}

func (C *Cola) desencolar (){
	C.end=C.end.next;
	C.contador=C.contador-1;
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

	var cola = NuevaCola();
	cola.encolar(4);
	cola.encolar(2);
	cola.encolar(6);
	cola.encolar(5);
	fmt.Println("cantidad de elementos: ", cola.contador);

	cola.imprimir(*cola);

	cola.desencolar();
	
	
	fmt.Println("test");

	cola.imprimir(*cola);
	fmt.Println("cantidad de elementos: ", cola.contador);

	
	
	

}



