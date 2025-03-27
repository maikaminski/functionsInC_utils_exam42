#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return (1);
}
int main(int argc, char **argv)
{
    int nbr;
    int factor;
    int first;

    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        
        if (nbr == 1)
            printf("1");

        factor = 2;
        first = 1;

        while (factor <= nbr)
        {
           if (nbr % factor == 0 && is_prime(factor))
           {
            if (first == 1)
            {
                printf("%d", factor);
                first = 0;
            }
            else
                printf("*%d", factor);
            nbr /= factor;
           }
           else
            factor++;
        }

    }
    printf("\n");
    return (0);
}