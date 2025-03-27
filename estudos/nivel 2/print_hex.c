#include <unistd.h>

int ft_atoi(char *str)
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

void print_hex(int n)
{
    char hex_digits[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}