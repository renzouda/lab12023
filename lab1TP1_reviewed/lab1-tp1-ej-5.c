/******************************************************************************

Determinar dados tres números cual es el mayor y cual el menor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaration of variables
    int numberOne,numberTwo,numTres,biggerNumber,smallestNumber;

    // data capture
    printf("Ingresar número 1 \n");
    scanf("%d",&numberOne);
    printf("Ingresar número 2 \n");
    scanf("%d",&numberTwo);
    printf("Ingresar número 3 \n");
    scanf("%d",&numTres);

    // calculation bigger number
    if (numberOne>numberTwo && numberOne>numTres){
        biggerNumber=numberOne;
    }else if (numberTwo>numberOne && numberTwo>numTres){
        biggerNumber=numberTwo;
    }else {
        biggerNumber=numTres;
    }
    
    // calculation smallest number    
    if (numberOne<numberTwo && numberOne<numTres){
        smallestNumber=numberOne;
    }else if (numberTwo<numberOne && numberTwo<numTres){
        smallestNumber=numberTwo;
    }else {
        smallestNumber=numTres;
    }

    printf("El número mayor es: %d \n",biggerNumber);
    printf("El número menor es: %d \n",smallestNumber);

    return 0;
}
