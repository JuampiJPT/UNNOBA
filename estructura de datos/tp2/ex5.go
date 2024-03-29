package main

import (
	"fmt"
	"strings"
)

func posicionMayuscula(palabra string, posicion int)int {
	palabraMayuscula:=strings.ToUpper(palabra)
	if len(palabra)==0 {
		return -1
	}
	if palabra[0]==palabraMayuscula[0] && palabra[0] != ' '{
		return posicion+1
	}else{
		palabraMayuscula=palabraMayuscula[1:]
		return posicionMayuscula(palabra[1:], posicion+1)
	}
	
}


func main() {
	posicion:=0
	
	fmt.Println(posicionMayuscula("hola Pasaasda",posicion ))
}

