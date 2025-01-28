#include <unistd.h>

void    camel_to_snake(char *str)
{
    int     i = 0;
    char    c;

    while (str[i])
    {
        c = str[i];
        if (c >= 'A' && c <= 'Z') 
        {
            write(1, "_", 1);     
            c += 32;              
        }
        write(1, &c, 1);   
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2) 
    {
        write(1, "\n", 1);
        return (0);
    }
    camel_to_snake(argv[1]); 
    write(1, "\n", 1); 
    return (0);
}
