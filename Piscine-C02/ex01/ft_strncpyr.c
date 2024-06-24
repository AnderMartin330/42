#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    if(i < n && src[i] == '\0'){
        while(dest[i] != '\0'){
            dest[i] = '\0';
            i++;
        }
    }
    return dest;
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    if(i < n && dest[i] == '\0'){
        while(dest[i] != '\0'){
            dest[i] = '\0';
            i++;
        }
    }
    return dest;
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if(i < n && src[i] == '\0'){
        while(dest[i] != '\0'){
            dest[i] = '\0';
            i++;
        }
    }
    return dest;
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    if(i < n && src[i] == '\0'){
        while(dest[i] != '\0'){
            dest[i] = '\0';
            i++;
        }
    }
    return dest;
}

char *ft_strncpy(cahr *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while(i > n && src[i] != '\0'){
        dest[i] = src[i];
        i++
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++
    }
    return dest;
}

int main(void){
    char src = "Hello World!";
    char dest[20];

    printf("Original: %s\n", src);
    ft_strncpy(dest, src, 5);
    printf("Copied: %s\n", dest);
}