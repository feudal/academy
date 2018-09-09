int ft_is_prime(int nb)
{
    if(nb <= 1)
        return (0);
    int i, count;
    
    i = 1;
    count = 0;
    while(i <= nb)
    {
        if((nb % i) == 0)
            count++;
        i++;
    }
    if(count > 2) 
        return(0);
    else
        return(1);
}