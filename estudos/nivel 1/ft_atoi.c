int ft_atoi(const char *str)
{
    int i = 0;
    int n = 0;
    int signal = 1;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signal = signal * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <='9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * signal);
}