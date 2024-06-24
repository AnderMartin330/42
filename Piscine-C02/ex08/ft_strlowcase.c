#include <stdio.h>

char *ft_strlowcase(char *str){
    unsigned int i = 0;

    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
    
}

int main(void){
    char str[] = "HELLO WORLD!";

    //printf("%d\n", ft_strlowcase(str));
    ft_strlowcase(str);
    printf("%s\n", str);
    return 0;
}