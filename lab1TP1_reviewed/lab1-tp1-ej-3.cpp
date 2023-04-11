/******************************************************************************

Una empresa de transporte cobra sus honorarios según los km recorridos y la 
cantidad de bultos que lleva a un cliente. Indicar el total a cobrarle al cliente, 
agregándole el importe de IVA (21%). Por cada bulto cobra un canon de 40 pesos,  
y por km recorrido 20 pesos.

*******************************************************************************/
#include <iostream>
using namespace std;

void bienvenida (){
  std::cout << "Bienvenido al programa que le permite calcular cuanto dinero debe abonarle el cliente por su servicio de paquetería" << std::endl;
  std::cout << "En éste programa podrá calcular el total acumulado por la cantidad de bultos entregados y kilómetros recorridos" << std::endl;
}

int main()
{
  // declaration of variables
  int bulk, bulkPrice;
  float km, kmPrice, subTotal, total;

  // call to welcome function
  bienvenida();

  // data capture
  std::cout << "Ingrese la cantidad de bultos entregados" << std::endl;
  std::cin >> bulk;
  std::cout << "Ingrese la cantidad de kilómetros recorridos" << std::endl;
  std::cin >> km;

  // calculation
  bulkPrice=bulk*40;
  kmPrice=km*20;
  subTotal=bulkPrice+kmPrice;
  total=subTotal*1.21;

  // return information to the user
  std::cout << "El cliente debe abonar $"<<total << std::endl;
  std::cout << "El precio bruto es $"<<$subTotal << std::endl;

  // return default value
  return 0;
}



