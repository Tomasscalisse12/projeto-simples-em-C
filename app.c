#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite um valor: ");
    scanf("%i", &valor1);

    printf("Digite outro valor: ");
    scanf("%i", &valor2);

    if (valor1 > valor2) {
        printf("O primeiro valor é maior.\n");
    } else if (valor2 > valor1) {
        printf("O segundo valor é maior.\n");
    } else {
        printf("Os valores são iguais.\n");
    }

    return 0;
}