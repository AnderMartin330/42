#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
    int temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

int main(void){
    int a = 10;
    int b = 3;

    printf("Division Antes: %i\n", a);
    printf("Resto Antes: %i\n", b);
    ft_ultimate_div_mod(&a, &b);
    printf("Division Despues: %i\n", a);
    printf("Resto Despues: %i\n", b);
    return 0;
}