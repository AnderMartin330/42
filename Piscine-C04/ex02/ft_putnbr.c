#include <stdio.h>

void ft_putnbr(int nb){
    if (nb < 0){
        printf("-");
        nb = -nb;
        }
        if (nb > 9){
            ft_putnbr(nb/10);
            ft_putnbr(nb%10);
        }
        else
            printf("%d", nb);
}

int main(void){
    ft_putnbr(42);
    return 0;
}