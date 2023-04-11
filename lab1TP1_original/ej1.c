/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float day, net, iva, bar, total;
    int numberOfDays;
    printf("Ingrese el valor a cobrar por día \n");
    scanf ("%f",&day);
    printf("Ingrese la cantidad de días que se quedaron los huespedes \n");
    scanf ("%d",&numberOfDays);
    net=(day*numberOfDays);
    iva=(net*0.21);
    bar=(net/3);
    total=(net+iva+bar);
    printf("El costo de su estadia sin iva es $ %f \n",net);
    printf("El costo de lo consumido en el bar es $ %f \n",bar);
    printf("El iva a pagar es $ %f \n",iva);
    printf("El total es $ %f \n",total);
    return 0;
}


