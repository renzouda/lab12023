/******************************************************************************

El dueño de un hostel necesita cobrar la estadía a un grupo de jóvenes 
que se han alojado considerando la cantidad de días que se han quedado 
çy el valor por día. Debe cobrar el netAmounto más el IVA (21% del netAmounto), 
informándoles estos importes por separado. Además, han consumido del 
frigobarAmount, por un importe igual a un tercio del total sin iva. 
Imprimir por pantalla una factura.
*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaration of variables
    float day, netAmount, iva, barAmount, total;
    int numberOfDays;

    // data capture
    printf("Ingrese el valor a cobrar por día \n");
    scanf ("%f",&day);
    printf("Ingrese la cantidad de días que se quedaron los huespedes \n");
    scanf ("%d",&numberOfDays);

    // calculations
    netAmount=(day*numberOfDays);
    iva=(netAmount*0.21);
    barAmount=(netAmount/3);
    total=(netAmount+iva+barAmount);

    // return information to the user
    printf("El costo de su estadia sin iva es $ %f \n",netAmount);
    printf("El costo de lo consumido en el barAmount es $ %f \n",barAmount);
    printf("El iva a pagar es $ %f \n",iva);
    printf("El total es $ %f \n",total);

    // return default value
    return 0;
}


