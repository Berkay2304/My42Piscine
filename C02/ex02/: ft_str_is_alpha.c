
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
int ft_str_is_alpha(char *str){
    int i;
    i = 0;
    
    while (i<=ft_strlen(str))
    {
        if(!(*(str+i)<=90) && !(*(str+i)>=65)){
            return 0;
        }
        i++;
    }
}
int main(int argc, char const *argv[])
{
    char str1[]= "123";
    char str2[]= "1123";
    printf("%d\n%d",ft_str_is_alpha(str1),ft_str_is_alpha(str2));
    return 0;
}
