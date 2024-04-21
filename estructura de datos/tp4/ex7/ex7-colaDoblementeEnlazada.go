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

func (C *Cola) encolar(value int) {
	nuevo := &Nodo{
		valor:    value,
		next:     nil,
		previous: nil, // El enlace anterior del nuevo nodo apunta al nodo final actual
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

func (C *Cola) desencolar(){
	if C.end!=nil{
		C.end=C.end.previous;
	}else{
		C.start=nil;
	}
	C.contador--;
}


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