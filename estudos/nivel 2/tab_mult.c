#include <unistd.h>

int ft_atoi( char *str)
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
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * signal);
}

void ft_putnbr(int n)
{
    char c;
    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void tab_mult(char *str)
{
    int n;
    int i = 1;

    n = ft_atoi(str);
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(n);
        write(1, " = ", 3);
        ft_putnbr(n * i);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        tab_mult(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}