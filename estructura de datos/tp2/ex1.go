package main

import "fmt"

func cuentaRegresiva(num int){
	if (num == 0){
		fmt.Print(num)
		return 
	}else{
		fmt.Println(num)
		cuentaRegresiva(num-1)
	}
}


func main(){

	cuentaRegresiva(5)

} 