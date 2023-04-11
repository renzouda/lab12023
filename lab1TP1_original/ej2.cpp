/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
    void bienvenida (){
        std::cout << "Bienvenido al programa que le permite calcular cuanto dinero suman las monedas en el banco" << std::endl;
        std::cout << "En éste programa podrá calcular el total acumulado por la cantidad de monedas que posea la sucursal del banco" << std::endl;
    }
int main()
{
    //Definición de variables
    int coinsOfTwo, coinsOfOne, coinsOfFifty, coinsOfTwentyfive, coinsOfTen, coinsOfFive, totalOfTwo, totalOfOne;
    float total, totalOfFifty, totalOfTwentyfive, totalOfTen, totalOfFive;
    //Bienvenida
    bienvenida();
    //Petición y lectura de datos
    std::cout << "Ingrese la cantidad de monedas de $2" << std::endl;
    std::cin >> coinsOfTwo;
     std::cout << "Ingrese la cantidad de monedas de $1" << std::endl;
    std::cin >> coinsOfOne;
     std::cout << "Ingrese la cantidad de monedas de $0.5" << std::endl;
    std::cin >> coinsOfFifty;
     std::cout << "Ingrese la cantidad de monedas de $0.25" << std::endl;
    std::cin >> coinsOfTwentyfive;
     std::cout << "Ingrese la cantidad de monedas de $0.10" << std::endl;
    std::cin >> coinsOfTen;
     std::cout << "Ingrese la cantidad de monedas de $0.05" << std::endl;
    std::cin >> coinsOfFive;
    //Calculos
    totalOfTwo=coinsOfTwo*2;
    totalOfOne=coinsOfOne;
    totalOfFifty=coinsOfFifty*0.5;
    totalOfTwentyfive=coinsOfTwentyfive*0.25;
    totalOfTen=coinsOfTen*0.1;
    totalOfFive=coinsOfFive*0.05;
    total=totalOfTwo+totalOfOne+totalOfFifty+totalOfTwentyfive+totalOfTen+totalOfFive;
    //Devolución de datos
    std::cout << "Total disponible en la sucursal $"<< total << std::endl;
    return 0;
}
