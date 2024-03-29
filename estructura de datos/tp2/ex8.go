package main

import (
	"fmt"
	
)


func BusquedaBinaria(numeros []int,inicio int, final int , valor int) int {
//obtenemos el valor medio
	medio:=(inicio+final)/2
switch {
//estando parados en el medio del array consultamos si igual o no al valor
case numeros[medio]==valor:
	return medio+1
//si el medio es mayo significa que nos pasamos
case numeros[medio]>valor:
	//enotonces hacemos la llamada recursiva y acortamos el array de el principio hasta la mitad menos 1
	return BusquedaBinaria(numeros,0,medio-1,valor)
//si el valor del medio es menor siginifca que tenemos que seguir avanzando
case numeros[medio]<valor:
	//entonces retornamos la funcion pero acortando el array del medio hacia adelante
	return BusquedaBinaria(numeros,medio+1,final,valor)
default:
	//si no encontramos el numero devuelve -1
	 return -1
}

}


func main(){

	numeros:=[]int {1,2,3,4,43,47,49,87,556}
	fmt.Print(BusquedaBinaria(numeros,0,len(numeros)-1, 47))

}

