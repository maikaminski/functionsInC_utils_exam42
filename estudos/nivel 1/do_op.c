#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int result = 0;
    int a = 0;
    int b = 0;

    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        if (argv[2][0] == '+')
            result = a + b;
        else if (argv[2][0] == '-')
            result = a - b;
        else if (argv[2][0] == '*')
            result = a * b;
        else if (argv[2][0] == '/')
            result = a / b;
        printf("%d", result);

    } else
        write(1, "\n", 1);
    
    return (0);
}