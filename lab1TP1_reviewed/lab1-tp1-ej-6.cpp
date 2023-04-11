/******************************************************************************

Dados los datos de una persona (nombre, sueldo, inasistencias) 
y la cantidad de días laborales

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
    // declaration of variables
    char name [25];
    int salary, absences, businessDays, salaryTotal;
    
    // call to welcome function
    bienvenida();
    
    // data capture
    std::cout << "Ingrese el nombre del empleado" << std::endl;
    std::cin >> name;
    std::cout << "Ingrese los días laborables de éste mes" << std::endl;
    std::cin >> businessDays;
    std::cout << "Ingrese el salario diario del empleado" << std::endl;
    std::cin >> salary;
    std::cout << "Ingrese la cantidad de inasistencias registradas este mes" << std::endl;
    std::cin >> absences;
    
    // calculation
    salaryTotal=(businessDays*salary)-(absences*salary);
    
    // return information to the user
    std::cout << "El empleado " <<name<< " debe cobrar $" <<salaryTotal<< " éste mes"<< std::endl;
    
    // return default value
    return 0;
}

