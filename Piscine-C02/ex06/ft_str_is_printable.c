#include <stdio.h>

int ft_str_is_printable(char *str){
    unsigned int i = 0;

    while(str[i]){
        if(str[i] >= 32 && str[i] <= 255){
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "Hello, World!";

    printf("%d\n", ft_str_is_printable(str));
}