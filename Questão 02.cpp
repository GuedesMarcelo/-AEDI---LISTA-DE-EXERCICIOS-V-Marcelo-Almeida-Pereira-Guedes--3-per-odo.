#include <stdio.h>
#include <stdlib.h>

int* gerarPA(int quantidade, int inicial, int razao) {
    int* array = (int*) malloc(quantidade * sizeof(int));
    for (int i = 0; i < quantidade; i++)
        array[i] = inicial + i * razao;
    return array;
}
void imprimirArray(int* array, int quantidade) {
    for (int i = 0; i < quantidade; i++)
        printf("%d ", array[i]);
    printf("\n");
}
int main() {
    int quantidade, inicial, razao;

    printf("Quantidade de elementos: ");
    scanf("%d", &quantidade);
    printf("Valor inicial: ");
    scanf("%d", &inicial);
    printf("Razão: ");
    scanf("%d", &razao);

    int* paArray = gerarPA(quantidade, inicial, razao);
    imprimirArray(paArray, quantidade);
    free(paArray);

    return 0;
}
