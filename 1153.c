#include <stdio.h>

int main() {
    int n, fatorial;;
    scanf("%d", &n);
    fatorial = n * (n - 1);
    n--;
    while (n > 1) {
        fatorial = fatorial * (n - 1);
        n--;
    }
    printf("%d\n", fatorial);
    return 0;
}