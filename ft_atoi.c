int	ft_atoi(const char *str)
{
    int n = 0;
    int i = 0;
    int signal = 1;
    
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            signal *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * signal);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main ()
// {
//     char *str = "1345";
//     int str1 = ft_atoi(str);
//     int str2 = atoi(str);

//     printf("%d\n", str1);
//     printf("%d\n", str2);
//     return 0;

// }