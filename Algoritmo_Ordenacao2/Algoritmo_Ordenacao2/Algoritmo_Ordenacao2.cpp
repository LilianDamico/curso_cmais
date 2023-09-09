#include <iostream>
#include <vector>
using namespace std;

// Função para trocar dois elementos de posição
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função de ordenação usando Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Digite o número de elementos: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Digite os elementos separados por espaço: ";
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Ordenar o array
    bubbleSort(arr.data(), n);

    // Calcular frequências
    vector<int> unique_elements;
    vector<int> fi;
    vector<int> Fi;
    vector<double> fr;
    vector<double> Fri;
    int current_element = arr[0];
    int frequency = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == current_element) {
            frequency++;
        }
        else {
            unique_elements.push_back(current_element);
            fi.push_back(frequency);
            if (Fi.empty()) {
                Fi.push_back(frequency);
            }
            else {
                Fi.push_back(Fi.back() + frequency);
            }
            current_element = arr[i];
            frequency = 1;
        }
    }
    unique_elements.push_back(current_element);
    fi.push_back(frequency);
    Fi.push_back(Fi.back() + frequency);

    // Calcular frequências relativas e suas acumuladas
    int total_elements = n;
    for (size_t i = 0; i < fi.size(); i++) {
        fr.push_back(static_cast<double>(fi[i]) / total_elements);
        if (Fri.empty()) {
            Fri.push_back(fr[i]);
        }
        else {
            Fri.push_back(Fri.back() + fr[i]);
        }
    }

    // Imprimir tabela de frequências
    cout << "Elemento | fi | Fi | fr | Fri" << endl;
    for (size_t i = 0; i < unique_elements.size(); i++) {
        cout << unique_elements[i] << " | " << fi[i] << " | " << Fi[i] << " | " << fr[i] << " | " << Fri[i] << endl;
    }

    return 0;
}
 






















