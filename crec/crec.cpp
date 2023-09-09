#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    // Solicita ao usuário que insira os três números
    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o segundo número: ";
    cin >> b;

    cout << "Digite o terceiro número: ";
    cin >> c;

    double lit, bet, big;

    if (a <= b && a <= c) {
        lit = a;
        if (b <= c) {
            bet = b;
            big = c;
        } else {
            bet = c;
            big = b;
        }
    } else if (b <= a && b <= c) {
        lit = b;
        if (a <= c) {
            bet = a;
            big = c;
        } else {
            bet = c;
            big = a;
        }
    } else {
        lit = c;
        if (a <= b) {
            bet = a;
            big = b;
        } else {
            bet = b;
            big = a;
        }        
    }

    cout << "Números em ordem crescente: " << lit << ", " << bet << ", " << big << endl;

    

    if (a == b && b == c) {
        cout<< "Os numeros são todos iguais " << a << ", " << b << " e " << c << endl;
    }

    return 0;
}
