#include <stdio.h>

void ft_putstr(char *str){
    int i;

    i = 0;
    while (str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
}

int main(void){
    char *str = "Hello World!";
    ft_putstr(str);
    return 0;
}