#include <stdio.h>

void ft_putstr(char *str){
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
}

int main(void){
    char str[] = "Hello, World!";
    ft_putstr(str);
    return 0;
}