int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
    if(ft_is_prime(nb) == 1)
        return nb;
    else
        while(ft_is_prime(nb) != 1)
        nb++;
    return(nb);
}
