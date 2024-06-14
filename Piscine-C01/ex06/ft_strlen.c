#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;
    
    while (*str != '\0')
    {
        str++;
        i++;
    }

    return i;
    
}

int main(void){
    char str[] = "Hello, World!";
    int i = ft_strlen(str);
    printf("Longitud del String: %i\n", i);
}