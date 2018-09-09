int ft_iterative_factorial(int nb)
{
    int rez;

    rez = 1;
    if((nb <= 0) || (nb > 12))
    {
        return 0;   
    }

    while (nb != 1)
    {
        rez = rez * nb;
        nb--;
    }
    return (rez);
}
