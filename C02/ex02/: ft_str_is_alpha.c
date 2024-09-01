// #include<stdio.h>

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
    if (ft_strlen(str) == 0) {
        return 1; 
    }
    
    while (i<ft_strlen(str))
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))){
            return 0;
        }
        i++;
    }
    return 1;
}
// int main(int argc, char const *argv[])
// {
//     char str1[]= "123";
//     char str2[]= "Berkay";
//     char str3[]= "";
//     printf("%d\n%d\n%d",ft_str_is_alpha(str1),ft_str_is_alpha(str2),ft_str_is_alpha(str3));
//     return 0;
// }
