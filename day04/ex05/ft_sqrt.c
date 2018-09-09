int ft_sqrt(int nb)
{
    if(nb <= 0)
        return (0);
    int i;

    i = 1;
    while((i * i) <= nb)
    {
        if((i * i) == nb) 
            return(i);
        i++;
    }
    return(0);
}
