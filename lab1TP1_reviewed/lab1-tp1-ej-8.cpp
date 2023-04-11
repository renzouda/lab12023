/******************************************************************************

La municipalidad permite financiar una multa cobrando un determinado recargo. 
Se debe informar el valor a pagar de la cuota, una vez que el contribuyente 
haya elegido en cuantas cuotas desea abonar su deuda (total + recargo). 
Además, si la multa es del año anterior, se le cobra un adicional de 45$. 
Si el beneficiario ya está pagando otra financiación, no se le permite acceder 
a esta facilidad de pago.

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
    // declaration of variables
    int duesQuantity, dateOfFine, actualYear, previousPayment;
    float valueOfTheFine, valueOfTheduesQuantity, feeSurcharge, surcharge, total, duesQuantityValue;
    
    // call to welcome function
    bienvenida();
    
    // data capture
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
        std::cin >> actualYear;
        std::cout << "Ingrese el año en que se le realizó la multa" << std::endl;
        std::cin >> dateOfFine;
        std::cout << "Ingrese el valor de recargo en por cuota" << std::endl;
        std::cin >> feeSurcharge;
        std::cout << "Ingrese la cantidad de cuotas en las que desea abonar" << std::endl;
        std::cin >> duesQuantity;
        
        surcharge=feeSurcharge*duesQuantity;
        total=valueOfTheFine+surcharge;
        if((actualYear-dateOfFine)>0){
            total=total+45;
        }
        duesQuantityValue=(total/duesQuantity);
        
        std::cout << "El total a abonar por el cliente es $" <<total<< std::endl;
        std::cout << "El valor de cada cuota es de $" <<duesQuantityValue<< std::endl;
    }


    return 0;
}
