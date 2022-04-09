#include <unistd.h>

void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    a = '0';
    b = '0';
    c = '0';
    while (a <= '9')
    {
        while(b <= '9')
        {
            while(c <= '9')
            {
                if(a < b && b < c)
                {
                    write(1, &a ,1);
                    write(1, &b, 1);
                    write(1, &c, 1);
                    if(a != '7' || b != '8' || c != '9')
                    {
                        write(1, ",", 1);
                        write(1, " ", 1);
                    }
                }
                c++;
            }
            c = '0';
            b++;
        } 
        b = '0';
        a = a + 1;
    }
}

int main()
{
    ft_print_comb();
    return (0);
}