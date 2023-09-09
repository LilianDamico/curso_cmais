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

    // Verifica se os números são diferentes
    if (a != b && a != c && b != c) {
        double menor, meio, maior;

        // Encontra o menor número
        if (a < b && a < b) {
            menor = a;
            if (b < c) {
                meio = b;
                maior = c;
            } else {
                meio = c;
                maior = b;
            }
        } else if (b < a && b < c) {
            menor = b;
            if (a < c) {
                meio = a;
                maior = c;
            } else {
                meio = c;
                maior = a;
            }
        } else {
            menor = c;
            if (a < b) {
                meio = a;
                maior = b;
            } else {
                meio = b;
                maior = a;
            }
        }

        // Exibe os números em ordem crescente
        cout << "Números em ordem crescente: " << menor << ", " << meio << ", " << maior << endl;
    } else {
        cout << "Os números digitados não são diferentes." << endl;
    }

    return 0;
}
