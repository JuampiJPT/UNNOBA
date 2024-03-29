package main

import "fmt"

func mayorElemento(num []int, mayor int) int {
    if len(num) == 0 {
        return mayor
    }
    aux := num[0]
    if aux > mayor {
        mayor = aux
    }
    return mayorElemento(num[1:], mayor)
}

func main() {
    num := []int{1, 2, 25, 4, 5}
    var mayor int = num[0]
    fmt.Println(mayorElemento(num, mayor))
}
