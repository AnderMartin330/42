#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main(void){
    int a = 17;
    int b = 5;
    int div = 1;
    int mod = 1;
    int *pdiv = &div;

    printf("Division Antes: %i\n", div);
    printf("Resto Antes: %i\n", mod);
    ft_div_mod(a, b, pdiv, &mod);
    printf("Division Despues: %i\n", div);
    printf("Resto Despues: %i", mod);
    return 0;
}