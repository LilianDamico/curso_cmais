#include <iostream>

using namespace std;

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    cout << "Digite a primeira data (dia mês ano): ";
    cin >> dia1 >> mes1 >> ano1;

    cout << "Digite a segunda data (dia mês ano): ";
    cin >> dia2 >> mes2 >> ano2;

    if (ano1 > ano2) {
        cout << "A primeira data é mais recente." << endl;
    } else if (ano2 > ano1) {
        cout << "A segunda data é mais recente." << endl;
    } else {
        if (mes1 > mes2) {
            cout << "A primeira data é mais recente." << endl;
        } else if (mes2 > mes1) {
            cout << "A segunda data é mais recente." << endl;
        } else {
            if (dia1 > dia2) {
                cout << "A primeira data é mais recente." << endl;
            } else if (dia2 > dia1) {
                cout << "A segunda data é mais recente." << endl;
            } else {
                cout << "As duas datas são iguais." << endl;
            }
        }
    }

    return 0;
}
