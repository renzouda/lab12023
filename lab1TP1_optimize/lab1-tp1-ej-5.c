/******************************************************************************

Determinar dados tres números cual es el mayor y cual el menor.

*******************************************************************************/
#include <stdio.h>

int getBiggerNumber(int numberOne, int numberTwo, int numberThree){
    int biggerNumber;
    
    if (numberOne>numberTwo && numberOne>numberThree){
        biggerNumber=numberOne;
    }else if (numberTwo>numberOne && numberTwo>numberThree){
        biggerNumber=numberTwo;
    }else {
        biggerNumber=numberThree;
    }


    return biggerNumber;
}

int getSmallestNumber(int numberOne, int numberTwo, int numberThree){
    int smallestNumber;
    
    if (numberOne<numberTwo && numberOne<numberThree){
        smallestNumber=numberOne;
    }else if (numberTwo<numberOne && numberTwo<numberThree){
        smallestNumber=numberTwo;
    }else {
        smallestNumber=numberThree;
    }

    return smallestNumber;
}

void getUserInformation(int *numberOne, int *numberTwo, int *numberThree){
    printf("Ingresar número 1 \n");
    scanf("%d",numberOne);
    printf("Ingresar número 2 \n");
    scanf("%d",numberTwo);
    printf("Ingresar número 3 \n");
    scanf("%d",numberThree);
}

int main()
{

    int numberOne,numberTwo,numberThree,biggerNumber,smallestNumber;

    getUserInformation(&numberOne, &numberTwo, &numberThree);

    biggerNumber = getBiggerNumber(numberOne, numberTwo, numberThree);
    smallestNumber = getSmallestNumber(numberOne, numberTwo, numberThree);

    printf("El número mayor es: %d \n",biggerNumber);
    printf("El número menor es: %d \n",smallestNumber);

    return 0;
}
