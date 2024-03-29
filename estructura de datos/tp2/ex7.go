package main

import "fmt"

func invertir (num [] int, inicio int)[]int {
if inicio >= len(num)/2{
	return num
}
temp:= num[inicio]
num[inicio]=num[len(num)-1-inicio]
num[len(num)-1-inicio]= temp
return invertir(num, inicio+1)



}


func main(){

	
	num:=[]int{1,2,3,4,5}
	resultado:=invertir(num, 0)
	fmt.Print(resultado)
}