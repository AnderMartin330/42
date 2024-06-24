#include <stdio.h>

char *ft_strcopy(char *dest, char *src){
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void){
    char src[] = "Hello";
    char dest[] = "World!";

    printf("%s\n", src);
    ft_strcopy(dest, src);
    printf("%s\n", dest);
    return 0;
}