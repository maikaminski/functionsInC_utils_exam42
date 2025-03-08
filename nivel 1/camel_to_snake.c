#include <unistd.h>

// void    camel_to_snake(char *str)
// {
//     int     i = 0;

//     while (str[i])
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z') 
//         {
//             write(1, "_", 1);     
//             str[i] += 32;              
//         }
//         write(1, &str[i], 1);   
//         i++;
//     }
// }

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//         camel_to_snake(argv[1]); 
//     write(1, "\n", 1); 
//     return (0);
// }
int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                write(1, "_", 1);
                argv[1][i] = argv[1][i] + 32;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}