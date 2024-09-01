//#include <stdio.h>
int ft_strlen(char *str){
    int i;
    i = 0;
    
    while (*(str+i) != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strcpy(char *dest, char *src){
    int i;
    i = 0;
    
    while (i<=ft_strlen(src))
    {
        *(dest+i) = *(src + i);
        i++;
    }
    return dest;
}
// int main(int argc, char const *argv[])
// {
//     char dest[]="";
//     char src[]="Hello World";
//     ft_strcpy(dest,src);
//     printf("%s",dest);
//     return 0;
// }
