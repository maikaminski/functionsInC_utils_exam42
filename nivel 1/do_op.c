#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n1 = 0;
    int n2 = 0;
    int res = 0;

    if (argc == 4)
    {
        n1 = atoi(argv[1]);
        n2 = atoi(argv[3]);
        if (argv[2][0] == '+')
            res = n1 + n2;
        else if (argv[2][0] == '-')
            res = n1 - n2;
        else if (argv[2][0] == '/')
            res = n1 / n2;
        else if (argv[2][0] == '*')
            res = n1 * n2;
        printf("%d", res);
        // write(1, "\n", 1);
        }
    else
        write(1, "\n", 1);
        return (0);
}
