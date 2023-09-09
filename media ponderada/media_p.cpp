#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    float nota_trabalho_pratico;
    float nota_avaliacao_semestral;
    float nota_exame_final;
    float media_ponderada;
    char conceito;

    // Solicita as notas ao usuário
    cout << "Digite a nota do trabalho prático (0-10): ";
    cin >> nota_trabalho_pratico;

    cout << "Digite a nota da avaliação semestral (0-10): ";
    cin >> nota_avaliacao_semestral;

    cout << "Digite a nota do exame final (0-10): ";
    cin >> nota_exame_final;

    // Calcula a média ponderada
    media_ponderada = (nota_trabalho_pratico * 2 + nota_avaliacao_semestral * 3 + nota_exame_final * 5) / (2 + 3 + 5);

    // Determina o conceito com base na média ponderada
    if (media_ponderada >= 8.0) {
        conceito = 'A';
    } else if (media_ponderada >= 7.0) {
        conceito = 'B';
    } else if (media_ponderada >= 6.0) {
        conceito = 'C';
    } else if (media_ponderada >= 5.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibe a média ponderada e o conceito
    cout << "Média Ponderada: " << media_ponderada << endl;
    cout << "Conceito: " << conceito << endl;

    return 0;
}
