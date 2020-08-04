/**
demo for example 1 and 2
*/

package main

import (
	"fmt"
	"time"
)

var n int = 64 * 1024 * 1024

func main() {
	for i := 0; i <= 15; i++ {
		t(1 << i)
	}
}

func t(step int) {
	//var r int
	arr := make([]int, n)
	for i, _ := range arr {
		arr[i] = i
	}
	fmt.Printf("test %d\t", step)
	s := time.Now().UnixNano()
	for i := 0; i < n; i += step {
		//r ^= arr[i]
		arr[i] *= 3
	}
	//println(r)
	e := time.Now().UnixNano()
	fmt.Println(float32(e-s) / 1000000)
}
