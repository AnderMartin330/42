#include <stdio.h>

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}

int main(void){
    int x = 5;
    int *px = &x;
    int **ppx = &px;
    int ***pppx = &ppx;
    int ****ppppx = &pppx;
    int *****pppppx = &ppppx;
    int ******ppppppx = &pppppx;
    int *******pppppppx = &ppppppx;
    int ********ppppppppx = &pppppppx;
    int *********pppppppppx = &ppppppppx;

    printf("%i\n", x);
    ft_ultimate_ft(pppppppppx);
    printf("%i", x);

    return 0;
}