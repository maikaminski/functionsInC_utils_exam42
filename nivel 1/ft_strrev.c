#include <stdio.h>

char *ft_strrev(char *str) {
    int len = 0;
    int i = 0;
    char temp;

    // Calcula o tamanho da string
    while (str[len] != '\0')
        len++;

    // Inverte a string
    while (i < len / 2) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }

    return str;
}

// Testando a função
int main() {
    char str[] = "Hello, World!";
    printf("Original: %s\n", str);
    printf("Invertida: %s\n", ft_strrev(str));
    return 0;
}