#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;

    // Solicita ao usuário que insira os três números
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    double menor, meio, maior;

    // Ordena os números em ordem crescente
    if (num1 <= num2 && num1 <= num3) {
        menor = num1;
        if (num2 <= num3) {
            meio = num2;
            maior = num3;
        } else {
            meio = num3;
            maior = num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
        if (num1 <= num3) {
            meio = num1;
            maior = num3;
        } else {
            meio = num3;
            maior = num1;
        }
    } else {
        menor = num3;
        if (num1 <= num2) {
            meio = num1;
            maior = num2;
        } else {
            meio = num2;
            maior = num1;
        }
    }

    // Exibe os números em ordem crescente
    cout << "Números em ordem crescente: " << menor << ", " << meio << ", " << maior << endl;

    return 0;
}
