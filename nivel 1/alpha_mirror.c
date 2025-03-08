#include <unistd.h>

// void alpha_mirror(char *str)
// {
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] = 'z' - (str[i] - 'a');
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] = 'Z' - (str[i] - 'A');
//         write(1, &str[i], 1);
//         i++;
//     }
//     write(1, "\n", 1);
// }

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         alpha_mirror(argv[1]);
//     else
//         write(1, "\n", 1);
//     return 0;
// }

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'z' - (argv[1][i] - 'a');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'Z' - (argv[1][i] - 'A');
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}