#include <stdio.h>
int main() {
    int numero, parte1, parte2, soma;

    printf("Numeros de 4 digitos que possuem a mesma caracteristica de 3025:\n");

    for (numero = 1000; numero <= 9999; numero++) {
        parte1 = numero / 100; // primeiros dois dígitos
        parte2 = numero % 100; // últimos dois dígitos

        soma = parte1 + parte2;

        if (soma * soma == numero) {
            printf("%d\n", numero);
        }
    }
