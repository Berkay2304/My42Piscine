
void ft_ultimate_div_mod(int *a, int *b){
    int temp1=0;
    int temp2 = 0;
    temp1= (*a)/(*b);
    temp2 = (*a) % (*b);
    *a = temp1;
    *b = temp2;
}
