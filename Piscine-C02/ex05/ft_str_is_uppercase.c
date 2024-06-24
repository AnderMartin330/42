#include <stdio.h>

int ft_str_is_uppercase(char *str){
    unsignedint i = 0;

    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "HELLOWORLD";

    printf("%d\n", ft_str_is_uppercase(str));
}