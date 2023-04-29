#include <iostream>
using namespace std;

void fibonacciFor();
void fibonacciWhile();

int main() {
    
    fibonacciFor();
    
    std::cout << std::endl;
    std::cout << std::endl;

    fibonacciWhile();

    return 0;
}

void fibonacciFor(){
    int n, before = 0, actual = 1, next = 0;

    cout << "Ingresar un número : ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << before << ", ";
            continue;
        }
        if(i == 2) {
            cout << actual << ", ";
            continue;
        }
        next = before + actual;
        before = actual;
        actual = next;
        
        cout << next << ", ";

        if( next > n){
            break;
        }
    }
}

void fibonacciWhile(){
    int num, num2, i, fib_ant, fib_act, fib_sig;
    fib_ant = 0;
    fib_act = 1;
    fib_sig = 1;

    std::cout << "Ingrese un número: " << std::endl;
    std::cin >> num2;
    
    while (fib_sig <= num2) {
        fib_sig = fib_ant + fib_act;
        fib_ant = fib_act;
        fib_act = fib_sig;
    }

    std::cout << "El valor anterior más cercano: " << fib_ant << std::endl;
    std::cout << "El valor posterior mas proximo es: " << fib_sig << std::endl;
}