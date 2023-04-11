/******************************************************************************

En un boliche se desea saber las ganancias de una noche, sabiendo que se 
vendieron una cierta cantidad de entradas a un determinado precio y hubo 
gastos que se deben descontar. Como ejemplo tomemos el caso de 1000 entradas 
vendidas, x% a un valor de $50 y el resto a un valor de $25. Por casa entrada 
de $50, corresponde un gasto de $12 y por cada entrada de $25 un gasto de $9.  

Realizar un informe que muestre la recaudación, gastos por tipo de entrada y 
la ganancia final

*******************************************************************************/
#include <iostream>
using namespace std;

void bienvenida (){
    std::cout << "Bienvenido al programa que le permite calcular la recaudación conseguida en una noche en el boliche" << std::endl;
    std::cout << "En éste programa podrá calcular la diferencia entre la ganancia por cada entrada y sus respectivos gastos" << std::endl;
}

int main()
{
    // declaration of variables
    int expensiveTicketsSold, cheapTicketsSold;
    float expensiveTicketsValue, cheapTicketsValue, total, totalCosts, expensiveTicketsCosts, cheapTicketsCosts, profits;
    
    // call to welcome function
    bienvenida();
    
    // data capture
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
    
    // calculation
    total=(expensiveTicketsSold*expensiveTicketsValue)+(cheapTicketsSold*cheapTicketsValue);
    totalCosts=(expensiveTicketsSold*expensiveTicketsCosts)+(cheapTicketsSold*cheapTicketsCosts);
    profits=total-totalCosts;
    
    // return information to the user
    std::cout << "La recaudación total fue de $" <<total<< std::endl;
    std::cout << "El gasto total fue de $" <<totalCosts<< std::endl;
    std::cout << "La ganancia final fue de $" <<profits<< std::endl;
    
    // return default value
    return 0;   
}

