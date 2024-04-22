package main

import "fmt"

//cola

type Nodo struct{
	valor int;
	next *Nodo;
	previous *Nodo;
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

func (C *Cola) encolarPrincipio(value int) {
	nuevo := &Nodo{
		valor:    value,
		next:     nil,
		previous: nil, 
	}

	if C.isEmpty() {
		C.start = nuevo
		C.end=nuevo
	} else {
		nuevo.previous=C.end;
		C.end.next=nuevo;
		C.end=nuevo;
	}

	
	C.contador++
}

func (C *Cola) encolarFinal(value int)  {

	nuevo := &Nodo{
		valor:    value,
		next:     nil,
		previous: nil, 
	}
	if C.isEmpty() {
		C.start = nuevo
		C.end=nuevo
	} else{
		nuevo.next=C.start;
		C.start.previous=nuevo;
		C.start=nuevo;
	}
C.contador++;
}

func (C *Cola) desencolarPrincipio(){
	if C.end!=nil{
		C.end=C.end.previous;
	}else{
		C.start=nil;
	}
	C.contador--;
}

func (C *Cola) desencolarFinal(){
	if C.start!=nil{
		C.start=C.start.next;
		C.start.previous=nil;
		C.contador--;
}}


func (C *Cola) isEmpty () bool {
	if C.end == nil {
		return true;
	}
	return false;
}



func (C *Cola) imprimir (cola Cola){
	aux := cola;
	for  aux.end != nil {
		fmt.Println(aux.end.valor);
		aux.end=aux.end.previous;
	}
}

 func main(){

	var cola = NuevaCola();
	cola.encolarFinal(4);
	cola.encolarFinal(3);
	cola.encolarPrincipio(2);
	fmt.Println("cantidad de elementos: ", cola.contador);

	cola.imprimir(*cola);

	cola.desencolarFinal();
	//cola.desencolarPrincipio()
	
	
	fmt.Println("test");

	cola.imprimir(*cola);
	fmt.Println("cantidad de elementos: ", cola.contador);


}