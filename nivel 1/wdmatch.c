#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;  // Índice para argv[1]
    int j = 0;  // Índice para argv[2]

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j]) // Percorre ambas as strings
        {
            if (argv[1][i] == argv[2][j]) // Se os caracteres forem iguais
                i++; // Avança na string que queremos formar
            
            j++; // Sempre avançamos em argv[2], pois devemos respeitar a ordem
        }
        if (argv[1][i] == '\0') // Se percorremos toda argv[1], significa que foi possível formar a string
        {
            i = 0;
            while (argv[1][i])
            {
                ft_putchar(argv[1][i]);
                i++;
            }
        }
    }
    ft_putchar('\n'); // Sempre imprime uma quebra de linha no final
    return (0);
}