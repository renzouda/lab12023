package main

import "fmt"

func main() {
	var numberOne, numberTwo, numberThree, biggerNumber, smallestNumber int

	getUserInformation(&numberOne, &numberTwo, &numberThree)

	biggerNumber = getBiggerNumber(numberOne, numberTwo, numberThree)
	smallestNumber = getSmallestNumber(numberOne, numberTwo, numberThree)

	fmt.Println(fmt.Sprintf("El número mayor es: %d", biggerNumber))
	fmt.Println(fmt.Sprintf("El número menor es: %d", smallestNumber))
}

func getUserInformation(numberOne, numberTwo, numberThree *int) {
	fmt.Println("Ingresar número 1")
	fmt.Scanf("%d\n", numberOne)
	fmt.Println("Ingresar número 2")
	fmt.Scanf("%d\n", numberTwo)
	fmt.Println("Ingresar número 3")
	fmt.Scanf("%d\n", numberThree)
}

func getBiggerNumber(numberOne, numberTwo, numberThree int) int {
	var biggerNumber int

	if numberOne > numberTwo && numberOne > numberThree {
		biggerNumber = numberOne
	} else if numberTwo > numberOne && numberTwo > numberThree {
		biggerNumber = numberTwo
	} else {
		biggerNumber = numberThree
	}

	return biggerNumber
}

func getSmallestNumber(numberOne, numberTwo, numberThree int) int {
	var smallestNumber int

	if numberOne < numberTwo && numberOne < numberThree {
		smallestNumber = numberOne
	} else if numberTwo < numberOne && numberTwo < numberThree {
		smallestNumber = numberTwo
	} else {
		smallestNumber = numberThree
	}

	return smallestNumber
}
