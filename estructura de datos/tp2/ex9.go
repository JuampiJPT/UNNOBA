package main

import "fmt"


func ordenamientoBurbuja (arr []int, n int){
	if n == 1{
		return 
	}

	for i:=0; i<n-1; i++{
		if arr[i] > arr[i+1] {
			arr[i], arr[i+1] = arr[i+1], arr[i]
		}
	}
	ordenamientoBurbuja(arr, n-1)
}



func main(){

arr:=[]int{4,5,6,2,1,3}
n:= len(arr)

fmt.Print(arr)
ordenamientoBurbuja(arr,n)
fmt.Print(arr)
}