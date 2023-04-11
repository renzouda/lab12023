/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void bienvenida (){
        std::cout << "Bienvenido al programa que le permite clasificar a las personas inscriptas en la obra social dependiendo de su edad" << std::endl;
        std::cout << "En éste programa podrá categorizar a cada persona dependiendo de su edad" << std::endl;
    }
int main()
{
int age;
//Bienvenida 
bienvenida();
//Petición y Lectura de Datos
std::cout << "Ingrese la edad de la persona a categorizar" << std::endl;
std::cin >> age;
//Proceso de Clasificación y Devolución de Datos
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

