#include <cmath>
#include <iostream>

using namespace std;



void ex1(int n = 1, int i = 1){
    int sum = 0;
    for (; i <= n; i++){
        sum += 1;
        cout << 1;
        if (i != n) {
            cout << " + ";
        }
    }
    cout << " = " ;
    cout << sum << '\n';
}


void ex2(int n = 1, int i = 1){
    int sum = 0;
    for (; i <= n; i++){
        sum += i;
        cout << i;
        if (i != n) {
            cout << " + ";
        }
    }
    cout << " = " ;
    cout << sum << '\n';
}

void ex3(int n = 1, int i = 1){
    int sum = 0;
    for (; i <= n; i++){
        sum += pow(i,2);
        cout << pow(i,2);
        if (i != n) {
            cout << " + ";
        }
    }
    cout << " = ";
    cout << sum << '\n';
}


int main() {
    int i = 1, n;
    char input[100];

    cout << "Ingrese i (No es obligatorio): ";
    cin.getline(input, 100);

    // Si la cadena no está vacía y es un número válido, convertirla a entero
    if (input[0] != '\0' && atoi(input) != 0) {
        i = atoi(input);
    } else if (input[0] != '\0') {
        cout << "Ingrese un numero valido" << endl;
        return 0;
    }

    cout << "Ingrese n: ";
    if (!(cin >> n)) {
        cout << "Ingrese un numero valido" << endl;
        return 0;
    }

    if (i > n) {
        cout << "i debe ser menor que n" << endl;
        return 0;
    }

    cout << "Sumatoria de 1's" << endl;
    ex1(n, i);
    cout << "Sumatoria de i's" << endl;
    ex2(n, i);
    cout << "Sumatoria de cuadrados de i's" << endl;
    ex3(n, i);


    return 0;
}
