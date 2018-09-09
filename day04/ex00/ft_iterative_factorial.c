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
        return ((nb+1) * ft_recursive_factorial(nb));
    }
}

int main()
{
    int n;

    n = ft_recursive_factorial(9);
    printf("%d\n", n);
    return(0);
}
