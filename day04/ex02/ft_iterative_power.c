#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int rez;

    rez = 1;

    if (power < 0)
        return (0);
    if (power == 0)
        return(1);
    while(power >= 1)
    {
        rez = rez * nb;
        power--;
    }
    return(rez);
}

int main()
{
    int n;

    n = ft_iterative_power(2, 3);
    printf("%d\n", n);
    return(0);
}