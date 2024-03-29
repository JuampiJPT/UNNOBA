package main

import "fmt"

func sumarNumeros(n int, m int) int {
	if n > m {
		return 0
	}
	return n + sumarNumeros(n+1, m)
}

func main() {

	fmt.Print(sumarNumeros(10,5))
}