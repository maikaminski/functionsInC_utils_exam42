#include <unistd.h>

int is_prime(int n)
{
    int i = 2;
    while (i < n)
        {
            if(n % i == 0)
                return (0);
            i++;
        }
        return (1);
}

int ft_atoi(char *str)
{
    int i = 0;

    while(*str >= '0' && *str <= '9')
    {
        i = i * 10;
        i = i + (*str - '0');
        str++;
    }
    return (i);
}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int add_prime_sum(int n)
{
    int sum = 0;
    int i = 2;

    while (i <= n)
    {
        if (is_prime(i) == 1)
            sum = sum + i;
        i++;
    }
    return (sum);
}

int main(int argc, char **argv)
{
    int n;
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        if(n == ft_atoi(argv[1]))
            ft_putnbr(add_prime_sum(n));
        else
            ft_putnbr(0);
    }
    write(1, "\n", 1);
    return (0);
}