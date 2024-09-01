// #include <stdio.h>

int ft_str_is_lowercase(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!(*(str+i)<='z' && *(str+i)>='a')){
            return 0;
        }
        i++;
    }
    return 1;
}
// int main(int argc, char const *argv[])
// {
//     char str1[]= "BERKAY";
//     char str2[]= "Berkay";
//     char str3[]= "";
//     printf("%d\n%d\n%d",ft_str_is_lowercase(str1),ft_str_is_lowercase(str2),ft_str_is_lowercase(str3));
//     return 0;
// }