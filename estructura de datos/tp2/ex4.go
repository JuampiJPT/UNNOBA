package main

import "fmt"


func vocalesConsonantes(palabra string) (int, int) {
	cantidadVocales, cantidadConsonantes := 0, 0
	
    if len(palabra) == 0 {
        return cantidadVocales, cantidadConsonantes
    }
	
    switch palabra[0] {
	case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U':
        cantidadVocales++
    default:
        cantidadConsonantes++
    }
	
    vocales, consonantes := vocalesConsonantes(palabra[1:])
    cantidadVocales += vocales
    cantidadConsonantes += consonantes
	
    return cantidadVocales, cantidadConsonantes
}

func main() {
	palabra := "hola"
	cantidadVocales, cantidadConsonantes := vocalesConsonantes(palabra)
	fmt.Printf("Cantidad de vocales: %d\n", cantidadVocales)
	fmt.Printf("Cantidad de consonantes: %d\n", cantidadConsonantes)
}


