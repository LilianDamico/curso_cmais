

#include <iostream>

using namespace std;


void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

/*
void swap(int& a, int& b) : Esta linha define uma função chamada swap que recebe duas variáveis como parâmetros por referência.
O int& a e int& b indicam que as variáveis a e b são passadas como referências, o que significa que qualquer modificação feita 
dentro da função afetará as variáveis originais fora da função.

int temp = a; : Aqui, é declarada uma variável temporária chamada temp para armazenar o valor da variável a.
Isso é necessário para que o valor de a não seja perdido durante a troca.

a = b; : Nesta linha, o valor da variável a é atualizado para ser igual ao valor da variável b.
Isso efetivamente troca os valores de a e b.

b = temp; : Finalmente, o valor originalmente contido na variável a(armazenado em temp) é atribuído à variável b.
Agora, o valor que estava em a foi transferido para b, e o valor original de b foi transferido de volta para a, completando a troca.

A função swap é uma maneira comum de trocar valores de variáveis em linguagens de programação.
No contexto de algoritmos de ordenação, como o Bubble Sort do exemplo anterior, a função swap é usada para mover elementos em uma determinada ordem para realizar a ordenação.

No contexto da linguagem C++, o símbolo & usado na declaração dos parâmetros da função swap indica que esses parâmetros estão sendo passados por referência. 
Passar por referência significa que a função receberá uma referência direta às variáveis originais, em vez de receber apenas uma cópia dos valores.

Existem duas maneiras principais de passar argumentos para funções em C++: por valor e por referência.

Passagem por Valor: Quando você passa um argumento por valor, uma cópia do valor é criada e passada para a função. 
Qualquer alteração feita dentro da função não afetará a variável original fora dela.

Passagem por Referência: Quando você passa um argumento por referência, você passa a própria variável, não uma cópia. 
Isso permite que a função acesse e modifique diretamente o valor da variável original fora da função.

No caso da função swap que eu forneci, o uso de int &a e int &b permite que a função modifique os valores originais das variáveis a e b, em vez de apenas trabalhar com cópias.
Isso é essencial para realizar a troca dos valores entre as variáveis, como ocorre na implementação do algoritmo de ordenação Bubble Sort.

Portanto, o uso de & na declaração dos parâmetros indica que eles estão sendo passados por referência, permitindo a modificação direta dos valores das variáveis originais.

*/


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

/*
A função bubbleSort implementa o algoritmo de ordenação Bubble Sort, que percorre repetidamente uma lista de elementos, compara pares adjacentes e os troca se estiverem na ordem errada.

void bubbleSort(int arr[], int n): Esta linha define a função bubbleSort, que recebe um array arr e o tamanho do array n como parâmetros.

for (int i = 0; i < n - 1; i++): Este é o início do primeiro loop for que percorre o array. i é uma variável de controle que representa o número de iterações realizadas. 
O loop executa enquanto i for menor que n - 1, porque após cada passagem do algoritmo, o maior elemento já estará em sua posição final, portanto, não é necessário compará-lo novamente.

for (int j = 0; j < n - i - 1; j++): Este é o segundo loop for, aninhado dentro do primeiro. Ele percorre a parte não ordenada do array, ou seja, excluindo os elementos que já estão ordenados. 
O loop executa enquanto j for menor que n - i - 1, para garantir que não ocorram acessos fora dos limites do array.

if (arr[j] > arr[j + 1]): Aqui, estamos verificando se o elemento atual (arr[j]) é maior que o próximo elemento (arr[j + 1]). 
Se essa condição for verdadeira, significa que os elementos estão fora de ordem e precisam ser trocados.

swap(arr[j], arr[j + 1]): Se a condição acima for verdadeira, chamamos a função swap para trocar os elementos arr[j] e arr[j + 1], movendo o elemento maior para a posição posterior.

O algoritmo continuará a percorrer os loops externo e interno até que todos os elementos estejam na ordem correta. 
A cada iteração do loop externo, o maior elemento da parte não ordenada "flutua" para a posição correta no final do array. Isso se repete até que todos os elementos estejam ordenados.

Após a execução da função bubbleSort, o array terá seus elementos ordenados em ordem crescente. 
Lembre-se de que o Bubble Sort não é o algoritmo mais eficiente em termos de desempenho, mas é um dos mais simples de entender e implementar.

*/



int main() {
    int arr[] = { 32, 34, 21, 32, 56, 90, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array antes da ordenação: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Array depois da ordenação: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
int arr[] = {64, 34, 25, 12, 22, 11, 90};: Nesta linha, um array chamado arr é criado e inicializado com os valores fornecidos dentro das chaves. 
Este é o array que será ordenado pelo algoritmo Bubble Sort.

int n = sizeof(arr) / sizeof(arr[0]);: Aqui, a variável n é calculada como o tamanho total do array dividido pelo tamanho de um único elemento do array. 
Isso resulta no número de elementos no array. Isso é necessário para informar a função bubbleSort quantos elementos há no array.

cout << "Array antes da ordenação: ";: Isso imprime a mensagem "Array antes da ordenação: " na saída padrão.

for (int i = 0; i < n; i++) { cout << arr[i] << " "; }: Este loop for percorre o array não ordenado e imprime cada elemento separado por um espaço.

bubbleSort(arr, n);: Esta linha chama a função bubbleSort para ordenar o array arr com o tamanho n usando o algoritmo Bubble Sort.

cout << "Array depois da ordenação: ";: Isso imprime a mensagem "Array depois da ordenação: " na saída padrão.

for (int i = 0; i < n; i++) { cout << arr[i] << " "; }: Este loop for percorre o array ordenado e imprime cada elemento separado por um espaço, mostrando o resultado da ordenação.

return 0;: Isso indica que o programa foi executado com sucesso e termina o programa.

O fluxo geral do main() é: inicializar o array, imprimir o array antes da ordenação, chamar o algoritmo de ordenação (Bubble Sort), imprimir o array após a ordenação e, finalmente, encerrar o programa.

*/
