#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int printed[256] = {0}; // Array para rastrear caracteres já impressos

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j] && !printed[(unsigned char)argv[1][i]])
                {
                    ft_putchar(argv[1][i]);
                    printed[(unsigned char)argv[1][i]] = 1; // Marca o caractere como impresso
                    break;
                }
                j++;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}