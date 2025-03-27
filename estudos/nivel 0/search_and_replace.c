#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    char a;
    char b;
    if (argc == 4)
    {
        a = argv[2][i];
        b = argv[3][i];

        while (argv[1][i])
        {
            if (argv[1][i] == a)
                ft_putchar(b);
            else 
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}