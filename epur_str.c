#include <unistd.h>

int main (int argc, char **argv)
{
    if (argc != 2 || argc == ""){
        write(1, "\n", 1);
        return (0);
    }

}