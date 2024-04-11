#include <iostream>

using namespace std;

void fibonacci(int n, int a = 1, int b = 1)
{
    if (n >= 1) {
        cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }else {
        cout << '\n';
    }
}


int factorialRecusivo(int n = 1){
    if (n==1) {
        cout << "1" << " = ";
        return 1;
    } else {
        cout << n << " * " ;
        return n * factorialRecusivo(n-1);
    }
}

int main (int argc, char *argv[]) {
    int n;
    cout << "Ingrese n: ";
    if (!(cin >> n)) {
        cout << "Ingrese un numero valido" << endl;
        return 0;
    }
    cout << "Primeros " << n << " numeros fibonacci" <<'\n';
    fibonacci(n);
    cout << "Factorial de " << n << " -> !" << n << '\n';
    cout << factorialRecusivo(n);
    return 0;
}

