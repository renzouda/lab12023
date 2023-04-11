/******************************************************************************

En una Obra Social, dada la edad de una persona, se le asignará una determinada Categoría; 
que será “Recién nacido” (menos de 1 año), 
“Infante” (hasta 5 años), “Niño” (de 6 a 12 años), 
“Pre-adolescente” (más de 12 años, hasta 18); 
“Adolescente” (más de 18 años, hasta 25), 
“Adulto joven” (más de 25, hasta 35 años); 
“Adulto” (más de 35, hasta 50 años) o 
“Adulto mayor” (más de 50 años). Dada la edad de una persona, informar su Categoría. 

*******************************************************************************/
#include <iostream>
using namespace std;

void bienvenida (){
    std::cout << "Bienvenido al programa que le permite clasificar a las personas inscriptas en la obra social dependiendo de su edad" << std::endl;
    std::cout << "En éste programa podrá categorizar a cada persona dependiendo de su edad" << std::endl;
}

int main()
{
    // declaration of variables
    int age;

    // call to welcome function 
    bienvenida();
    
    // data capture
    std::cout << "Ingrese la edad de la persona a categorizar" << std::endl;
    std::cin >> age;
    
    // calculations and data return
    if(age<1)
        std::cout << "El usuario ingresado es Recién Nacido" << std::endl;
    else if(age<=5)
        std::cout << "El usuario ingresado es Infante" << std::endl;
    else if(age<=12)
        std::cout << "El usuario ingresado es Niño" << std::endl;
    else if(age<=18)
        std::cout << "El usuario ingresado es Pre-adolescente" << std::endl;
    else if(age<=25)
        std::cout << "El usuario ingresado es Adolescente" << std::endl;
    else if(age<=35)
        std::cout << "El usuario ingresado es Adulto joven" << std::endl;
    else if(age<=50)
        std::cout << "El usuario ingresado es Adulto" << std::endl;
    else
        std::cout << "El usuario ingresado es Adulto mayor" << std::endl;
    return 0;
}

