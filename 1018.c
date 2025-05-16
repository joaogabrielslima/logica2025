#include <stdio.h>

int main() {

    int valor, temp_valor;

    scanf("%d", &valor);
    temp_valor = valor;
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", temp_valor/100);
    temp_valor = temp_valor%100;
    printf("%d nota(s) de R$ 50,00\n", temp_valor/50);
    temp_valor = temp_valor%50;
    printf("%d nota(s) de R$ 20,00\n", temp_valor/20);
    temp_valor = temp_valor%20;
    printf("%d nota(s) de R$ 10,00\n", temp_valor/10);
    temp_valor = temp_valor%10;
    printf("%d nota(s) de R$ 5,00\n", temp_valor/5);
    temp_valor = temp_valor%5;
    printf("%d nota(s) de R$ 2,00\n", temp_valor/2);
    temp_valor = temp_valor%2;
    printf("%d nota(s) de R$ 1,00\n", temp_valor/1);

    return 0;
}