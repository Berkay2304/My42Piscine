
void    ft_swap(int *a, int *b){
    int number = 0;
    int *temp = &number;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
