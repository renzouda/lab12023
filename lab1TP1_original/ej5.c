/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numUno,numDos,numTres,numMayor,numMenor;
    printf("Ingresar número 1 \n");
    scanf("%d",&numUno);
    printf("Ingresar número 2 \n");
    scanf("%d",&numDos);
    printf("Ingresar número 3 \n");
    scanf("%d",&numTres);
    if (numUno>numDos && numUno>numTres){
        numMayor=numUno;
    }else if (numDos>numUno && numDos>numTres){
        numMayor=numDos;
        }else {
            numMayor=numTres;
        }
        printf("El número mayor es: %d \n",numMayor);
    if (numUno<numDos && numUno<numTres){
        numMenor=numUno;
    }else if (numDos<numUno && numDos<numTres){
        numMenor=numDos;
        }else {
            numMenor=numTres;
        }
        printf("El número menor es: %d \n",numMenor);

    return 0;
}
