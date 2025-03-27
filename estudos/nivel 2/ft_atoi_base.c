int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    char *lower = "0123456789abcdef";
    char *upper = "0123456789ABCDEF";

    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        char c = str[i];
        int value = -1;
        int j = 0;

        while (j < str_base)
        {
            if (c == lower[j] || c == upper[j])
            {
                value = j;
                break;
            }
            i++;
        }
        if (value == -1)
            break;
        result = result *str_base +value;
    }
    return (result * sign);
}