#include <stdio.h>
int main() {
    int n, i;
    int termo1 = 1, termo2 = 1, proximo;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("%d", termo1);
    }
    if (n >= 2) {
        printf(" %d", termo2);
    }

    for (i = 3; i <= n; i++) {
        proximo = termo1 + termo2;
        printf(" %d", proximo);
        termo1 = termo2;
        termo2 = proximo;
    }
