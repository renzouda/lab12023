/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void bienvenida (){
        std::cout << "Bienvenido al programa que le permite calcular la recaudación conseguida en una noche en el boliche" << std::endl;
        std::cout << "En éste programa podrá calcular la diferencia entre la ganancia por cada entrada y sus respectivos gastos" << std::endl;
    }
int main()
{
//Definición de Variables
int expensiveTicketsSold, cheapTicketsSold;
float expensiveTicketsValue, cheapTicketsValue, total, totalCosts, expensiveTicketsCosts, cheapTicketsCosts, profits;
bienvenida();
//Petición y Lectura de datos
std::cout << "Ingrese la cantidad de entradas caras vendidas" << std::endl;
std::cin >> expensiveTicketsSold;
std::cout << "Ingrese el precio de las entradas caras " << std::endl;
std::cin >> expensiveTicketsValue;
std::cout << "Ingrese el precio del gasto por cada entrada cara " << std::endl;
std::cin >> expensiveTicketsCosts;
std::cout << "Ingrese la cantidad de entradas baratas vendidas" << std::endl;
std::cin >> cheapTicketsSold;
std::cout << "Ingrese el precio de las entradas baratas " << std::endl;
std::cin >> cheapTicketsValue;
std::cout << "Ingrese el precio del gasto por cada entrada barata " << std::endl;
std::cin >> cheapTicketsCosts;
//Calculos
total=(expensiveTicketsSold*expensiveTicketsValue)+(cheapTicketsSold*cheapTicketsValue);
totalCosts=(expensiveTicketsSold*expensiveTicketsCosts)+(cheapTicketsSold*cheapTicketsCosts);
profits=total-totalCosts;
//Devolución de datos
std::cout << "La recaudación total fue de $" <<total<< std::endl;
std::cout << "El gasto total fue de $" <<totalCosts<< std::endl;
std::cout << "La ganancia final fue de $" <<profits<< std::endl;
    return 0;
}

