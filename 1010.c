#include <stdio.h>
 
int main() {

    int a, b, x, y;
    float c, z, total;
    
    scanf("%d %d %f", &a, &b, &c);
    scanf("%d %d %f", &x, &y, &z);
    
    total = (b*c) + (y*z);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}