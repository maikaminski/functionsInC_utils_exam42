#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int printed[256] = {0};

    if (argc == 3)
    {
        while (argv[1][i])
        {
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j] && !printed[(unsigned char)argv[1][i]])
                {
                    write(1, &argv[1][i], 1);
                    printed[(unsigned char)argv[1][i]] = 1;
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

