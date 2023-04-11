/******************************************************************************

Calcular cuánto dinero (en pesos) tiene un Banco, en una sucursal específica, 
conociendo las cantidades que posee de cada valor posible de las monedas en 
vigencia:2$, 1$, 50 centavos, 25 centavos, 10 centavos y 5 centavos. 
Por ejemplo: la sucursal de Guaymallén, tiene 257 monedas de 2$, 5300 monedas 
de 1$, 2400 monedas de 50 centavos, 6108 monedas de 10 centavos, 2357 monedas 
de 5 centavos y no tiene monedas de 25 centavos. Se informará: 
“TOTAL DISPONIBLE SUCURSAL Guaymallén $ X.XXX,XX.

*******************************************************************************/
#include <iostream>
using namespace std;

void bienvenida (){
    std::cout << "Bienvenido al programa que le permite calcular cuanto dinero suman las monedas en el banco" << std::endl;
    std::cout << "En éste programa podrá calcular el total acumulado por la cantidad de monedas que posea la sucursal del banco" << std::endl;
}

int main()
{
    // declaration of variables
    int coinsOfTwo, coinsOfOne, coinsOfFifty, coinsOfTwentyfive, coinsOfTen, coinsOfFive, totalOfTwo, totalOfOne;
    float total, totalOfFifty, totalOfTwentyfive, totalOfTen, totalOfFive;

    // call to welcome function
    bienvenida();

    // data capture
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

    // calculation
    totalOfTwo=coinsOfTwo*2;
    totalOfOne=coinsOfOne;
    totalOfFifty=coinsOfFifty*0.5;
    totalOfTwentyfive=coinsOfTwentyfive*0.25;
    totalOfTen=coinsOfTen*0.1;
    totalOfFive=coinsOfFive*0.05;
    total=totalOfTwo+totalOfOne+totalOfFifty+totalOfTwentyfive+totalOfTen+totalOfFive;
    
    // return information to the user
    std::cout << "Total disponible en la sucursal $"<< total << std::endl;
    
    // return default value
    return 0;
}
