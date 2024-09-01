// #include <stdio.h>

int ft_str_is_uppercase(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!(*(str+i)<='Z' && *(str+i)>='A')){
            return 0;
        }
        i++;
    }
    return 1;
}
// int main(int argc, char const *argv[])
// {
//     char str1[]= "BERKAY";
//     char str2[]= "berkay";
//     char str3[]= "";
//     printf("%d\n%d\n%d",ft_str_is_uppercase(str1),ft_str_is_uppercase(str2),ft_str_is_uppercase(str3));
//     return 0;
// }