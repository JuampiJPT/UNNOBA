package main

import "fmt"


func factorial (num int)int {
	if num == 0 {
		return 1
	}else{
		return num * factorial(num-1)
}
}

func main(){

	fmt.Print(factorial(7))

}