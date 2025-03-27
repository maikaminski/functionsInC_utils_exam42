#include <unistd.h>

int isprime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        ++i;
    }
    return (1);
}

int     ft_atoi(char *n)
{
    int i = 0;

    while (*n >= '0' && *n <= '9')
    {
        i = i * 10;
        i = i + (*n - '0');
        ++n;
    }
    return (i);
}

void ft_putnbr(int n)
{
    char c;

    if (n > 9)
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
        if (isprime(i) == 1)
            sum = sum + i;
        ++i;
    }
    return (sum);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n;
        n = ft_atoi(argv[1]);
        if (n == ft_atoi(argv[1]))
            ft_putnbr(add_prime_sum(n));
    }
    ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}
