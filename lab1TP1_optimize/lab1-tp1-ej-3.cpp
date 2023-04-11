/******************************************************************************

Una empresa de transporte cobra sus honorarios según los km recorridos y la 
cantidad de bultos que lleva a un cliente. Indicar el total a cobrarle al cliente, 
agregándole el importe de IVA (21%). Por cada bulto cobra un canon de 40 pesos,  
y por km recorrido 20 pesos.

*******************************************************************************/
#include <iostream>
using namespace std;

void printWelcomeMessage (){
  std::cout << "Bienvenido al programa que le permite calcular cuanto dinero debe abonarle el cliente por su servicio de paquetería" << std::endl;
  std::cout << "En éste programa podrá calcular el total acumulado por la cantidad de bultos entregados y kilómetros recorridos" << std::endl;
}

float getTotalPrice(int bulk, float km) {
  float kmPrice, subTotal, bulkPrice;

  bulkPrice=bulk*40;
  kmPrice=km*20;
  subTotal=bulkPrice+kmPrice;

  return subTotal*1.21;
}

int main()
{
  int bulk;
  float km, total;

  printWelcomeMessage();

  // TODO: mover estas líneas a otra función, investigar sobre punteros.
  std::cout << "Ingrese la cantidad de bultos entregados" << std::endl;
  std::cin >> bulk;
  std::cout << "Ingrese la cantidad de kilómetros recorridos" << std::endl;
  std::cin >> km;

  total = getTotalPrice(bulk, km);

  // return information to the user
  std::cout << "El cliente debe abonar $"<<total << std::endl;

  // return default value
  return 0;
}



