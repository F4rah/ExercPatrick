#include <stdio.h>
int main() {
    int x, z;
    int soma = 0, contador = 0, atual;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    do {
        printf("Digite o valor de Z (maior que X): ");
        scanf("%d", &z);
    } while (z <= x);

    atual = x;
    printf("Somando: ");
    while (soma <= z) {
        soma += atual;
        printf("%d", atual);
        atual++;
        contador++;

        if (soma <= z) {
            printf(" + ");
        }
    }
