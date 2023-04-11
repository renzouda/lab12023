/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;
    void bienvenida (){
        std::cout << "Bienvenido al programa que le permite calcular cuanto dinero debe abonarle a su empleado" << std::endl;
        std::cout << "En éste programa podrá calcular el total acumulado por la diferencia entre días tabajados e inasistencias" << std::endl;
    }
int main()
{
char name [25];
int salary, absences, businessDays, salaryTotal;
//Bienvenida
bienvenida();
//Petición y Lectura de datos
std::cout << "Ingrese el nombre del empleado" << std::endl;
std::cin >> name;
std::cout << "Ingrese los días laborables de éste mes" << std::endl;
std::cin >> businessDays;
std::cout << "Ingrese el salario diario del empleado" << std::endl;
std::cin >> salary;
std::cout << "Ingrese la cantidad de inasistencias registradas este mes" << std::endl;
std::cin >> absences;
//Calculos
salaryTotal=(businessDays*salary)-(absences*salary);
//Devolución de Datos
std::cout << "El empleado " <<name<< " debe cobrar $" <<salaryTotal<< " éste mes"<< std::endl;
    return 0;
}

