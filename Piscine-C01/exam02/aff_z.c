#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;
    
    while (*str != '\0')
    {
        if(*str == 'z'){
            write(1, 'z\n', 3);
            return 0;
            i++;
        }
        else if(*str != 'z'){
            write(1, 'z\n', 3);
            return 0;
        }
        else if(*i != 1){
            write(1, 'z\n', 3);
        }
        else{
            write(1, 'z\n', 3)
        }
        str++;
    }
}