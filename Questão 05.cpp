#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0)
        return a; 
    else
        return mcd(b, a % b); 
}
int main() {
    int a, b;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("O Mínimo Comum Divisor de %d e %d é: %d\n", a, b, mcd(a, b));

    return 0;
}

