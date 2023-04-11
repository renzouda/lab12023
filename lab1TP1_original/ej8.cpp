/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void bienvenida (){
        std::cout << "Bienvenido al programa que le permite calcular el financiamiento de sus multas" << std::endl;
        std::cout << "En éste programa podrá calcular el total a abonar por su multa una vez seleccionado el plan de pago" << std::endl;
        std::cout << "Éste programa no le permitirá financiar más de una multa a la vez" << std::endl;
    }
int main()
{
//Declaración de Variables
int dues, dateOfValue, year, previousPayment;
float valueOfTheFine, valueOfTheDues, feeSurcharge, surcharge, total, duesValue;
//Bienvenida
bienvenida();
//Petición y Lectura de Datos
std::cout << "¿El cliente se encuentra pagando una multa anterior actualmente?" << std::endl;
std::cout << "1- Si" << std::endl;
std::cout << "2- No" << std::endl;
std::cin >> previousPayment;
if(previousPayment==1)
std::cout << "El cliente no puede acceder a la facilidad de pago" << std::endl;
else{
std::cout << "Ingrese el valor de la multa a cobrar" << std::endl;
std::cin >> valueOfTheFine;
std::cout << "Ingrese el año actual" << std::endl;
std::cin >> year;
std::cout << "Ingrese el año en que se le realizó la multa" << std::endl;
std::cin >> dateOfValue;
std::cout << "Ingrese el valor de recargo en por cuota" << std::endl;
std::cin >> feeSurcharge;
std::cout << "Ingrese la cantidad de cuotas en las que desea abonar" << std::endl;
std::cin >> dues;
//Proceso
surcharge=feeSurcharge*dues;
total=valueOfTheFine+surcharge;
if((year-dateOfValue)>0)
{total=total+45;
}
duesValue=(total/dues);
//Devolución de Datos
std::cout << "El total a abonar por el cliente es $" <<total<< std::endl;
std::cout << "El valor de cada cuota es de $" <<duesValue<< std::endl;
}
    return 0;
}
