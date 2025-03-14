int ft_char_to_value(char c) {
    if (c >= '0' && c <= '9')  
        return c - '0';  
    if (c >= 'a' && c <= 'f')  
        return c - 'a' + 10;  
    if (c >= 'A' && c <= 'F')  
        return c - 'A' + 10;  
    return -1; 
}

int ft_atoi_base(const char *str, int str_base) {
    if (str_base < 2 || str_base > 16)  
        return 0;

    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }


    int value;
    while ((value = ft_char_to_value(str[i])) != -1 && value < str_base) {
        result = result * str_base + value;
        i++;
    }

    return result * sign;
}