/**
demo for example 1 and 2
*/

package main

import (
	"fmt"
	"time"
)

var step = 32 * 1024 * 1024

func main() {
	for i := 0; i <= 20; i++ {
		t((1 << i) * 1024)
	}
}

func t(n int) {
	var arr []int = make([]int, n)
	fmt.Printf("test %d\t", n)
	s := time.Now().UnixNano()
	for i := 0; i < step; i++ {
		arr[(i*16)%n] += 3
	}
	e := time.Now().UnixNano()
	fmt.Println((e - s) / 1000000)
}
