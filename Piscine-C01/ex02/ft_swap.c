#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int a = 5;
    int b = 10;

    printf("antes A: %i, antes B: %i\n", a , b);
    ft_swap(&a, &b);
    printf("despues A: %i, despues B: %i", a , b);
    return 0;
}