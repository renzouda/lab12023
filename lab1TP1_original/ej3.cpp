/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void bienvenida (){
        std::cout << "Bienvenido al programa que le permite calcular cuanto dinero debe abonarle el cliente por su servicio de paquetería" << std::endl;
        std::cout << "En éste programa podrá calcular el total acumulado por la cantidad de bultos entregados y kilómetros recorridos" << std::endl;
    }
int main()
{
int bulk, bulkPrice;
float km, kmPrice, subtotal, total;
//Bienvenida
bienvenida();
//Petición y Lectura de datos
std::cout << "Ingrese la cantidad de bultos entregados" << std::endl;
std::cin >> bulk;
std::cout << "Ingrese la cantidad de kilómetros recorridos" << std::endl;
std::cin >> km;
//Calculos
bulkPrice=bulk*40;
kmPrice=km*20;
subtotal=bulkPrice+kmPrice;
total=subtotal*1.21;
//Devolución de Datos 
std::cout << "El cliente debe abonar $"<<total << std::endl;
return 0;
}



