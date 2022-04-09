#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1,"abcdefghijklmnopqrstuvwxyz",26);
}

void ft_print_reverse_alphabet(void)
{
    write(1,"zyxwvutsrqponmlkjihgfedcba",26);
}

void ft_print_number(void)
{
    write(1,"0123456789",10);
}

int main()
{
    ft_print_number();
}