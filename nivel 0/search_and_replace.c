/*#include <unistd.h>

int main (int argc, char **argv)
{
    if(argc != 4)
    {
        write(1,"\n",1);
        return (0);
    }
    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        int j = 0;
        while(argv[1][j]){
        write(1, &argv[1][j], 1);
        j++;
        }
        write(1, "\n", 1);
        return (0);
    }

    char *string = argv[1];
    char a = argv[2][0];
    char b = argv[3][0];
    int i = 0;

    while (string[i])
    {
        if(string[i] == a){
            string[i] = b;
        }
        write(1, &string[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 4){
        char a = argv[2][0];
        char b = argv[3][0];
        int i = 0;
    while(argv[1][i])
    {
        if (argv[1][i] == a)
            write(1, &b, 1);
        else
            write(1, &argv[1][i], 1);
        i++;
    }
}   
    write(1, "\n", 1);
    return (0);
}