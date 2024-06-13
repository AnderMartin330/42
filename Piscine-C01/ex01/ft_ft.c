#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}

int main(void){
    int n = 5;
    printf("%i\n", n);
    ft_ft(&n);
    printf("%i", n);

    return 0;
}