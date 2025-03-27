#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    int count = 1;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                count = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                count = argv[1][i] - 64;
            while (count <= 1)
            {
                ft_putchar(argv[1][i]);
                count--;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}