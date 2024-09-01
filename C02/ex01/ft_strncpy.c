#include<stdio.h>
int ft_strlen(char *str){
    int i;
    i = 0;
    
    while (*(str+i) != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;
    i = 0;

    while (i < n)
    {
        *(dest+i) = *(src+i);
        i++;
    }
    return dest;
    
}
int main(int argc, char const *argv[])
{
    char dest[6];
    char src[]="Hello World";
    ft_strncpy(dest,src,5);
    printf("%s",dest);
    return 0;
}
