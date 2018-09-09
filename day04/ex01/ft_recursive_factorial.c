#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if((nb <= 0) || (nb > 12))
    {
        return 0;   
    }
    else    if(nb == 1)
    {
        return(nb);
    }
    else
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}

int main()
{
    int n;

    n = ft_recursive_factorial(13);
    printf("%d\n", n);
    return(0);
}