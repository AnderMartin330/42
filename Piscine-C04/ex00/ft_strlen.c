#include <stdio.h>

int ft_strlen(char *str){
    int i;

    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(void){
    int length;

    length = ft_strlen("Hello World!");
    printf("%d\n", length);
    return 0;
}