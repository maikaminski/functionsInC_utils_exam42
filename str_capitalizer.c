#include <unistd.h>
void capitalizer(char *str)
{
    int i = 0;
    int new_word = 1;
    
    while (str[i])
    {
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')
        {
          if (str[i] >= 'a' && str[i] <= 'z')
             str[i] -= 32;
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z')
           str[i] += 32;

        if (str[i] == ' ' || str[i] == '\t')
            new_word = 1;
        else
            new_word = 0;
        write(1, &str[i], 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    int i = 1;

    if (argc > 1)
    {
        while (i < argc)
        {
            capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    } else
    write(1, "\n", 1);
    return 0;
}