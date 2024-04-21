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

func (P *Pila) balanceada() bool {
    estaBalanceada := true
    aux := P.tope
    final := P.tope

    // Avanzar 'final' hasta el último nodo de la pila
    for final != nil && final.next != nil {
        final = final.next
    }

    // Comparar los caracteres de los nodos correspondientes
    for aux != nil && final != nil {
        switch aux.caracter {
        case '{':
            if final.caracter != '}' {
                estaBalanceada = false
            }
        case '(':
            if final.caracter != ')' {
                estaBalanceada = false
            }
        case '[':
            if final.caracter != ']' {
                estaBalanceada = false
            }
        }
        aux = aux.next
        // Avanzar 'final' hacia atrás
        finalAnterior := P.tope
        for finalAnterior != nil && finalAnterior.next != final {
            finalAnterior = finalAnterior.next
        }
        final = finalAnterior
    }
	
    return estaBalanceada
}


    


func main() {
	var pila Pila
	pila.apilar('{');
	pila.apilar('[');
	pila.apilar('}');
	pila.apilar(']');

	if pila.balanceada() {
		fmt.Println("Esta balanceada")
	} else {
		fmt.Println("No esta balanceada")
	}
}