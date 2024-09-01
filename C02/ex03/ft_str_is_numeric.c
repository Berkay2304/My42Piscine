// #include <stdio.h>
int ft_str_is_numeric(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!(*(str+i)<='9' && *(str+i)>='0')){
            return 0;
        }+
        i++;
    }
    
    return 1;
}
// int main(int argc, char const *argv[])
// {
//     char str1[]= "123";
//     char str2[]= "1Berkday";
//     char str3[]= "";
//     printf("%d\n%d\n%d",ft_str_is_numeric(str1),ft_str_is_numeric(str2),ft_str_is_numeric(str3));
//     return 0;
// }
