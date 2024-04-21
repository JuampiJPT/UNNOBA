package main

import (
	"fmt"
)

type Nodo struct {
	caracter rune
	next     *Nodo
}

type Pila struct {
	tope     *Nodo
	contador int
}

func NuevaPila() *Pila {
	return &Pila{
		tope:     nil,
		contador: 0,
	}
}

func (P *Pila) apilar(char rune) {
	nuevo := &Nodo{
		caracter: char,
		next:     P.tope,
	}
	P.tope = nuevo
	P.contador++
}

func (P *Pila) desapilar() {
	if P.tope != nil {
		P.tope = P.tope.next
		P.contador--
	}
}

func (P *Pila) palindromo() bool {
    esPalindromo := true
    aux := P.tope
    final := P.tope

    // Avanzar 'final' hasta el último nodo de la pila
    for final != nil && final.next != nil {
        final = final.next
    }

    // Comparar los caracteres de los nodos correspondientes
    for aux != nil && final != nil {
        if aux.caracter != final.caracter {
            esPalindromo = false
            break
        }
        aux = aux.next
        // Avanzar 'final' hacia atrás
        finalAnterior := P.tope
        for finalAnterior != nil && finalAnterior.next != final {
            finalAnterior = finalAnterior.next
        }
        final = finalAnterior
    }

    return esPalindromo
}

func main() {
	var pila Pila
	pila.apilar('o');
	pila.apilar('s');
	pila.apilar('o');

	if pila.palindromo() {
		fmt.Println("Es palíndromo")
	} else {
		fmt.Println("No es palíndromo")
	}
}
