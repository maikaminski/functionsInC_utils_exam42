#include <stdlib.h> 

static int	ft_get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	ft_fill_digits(char *str, unsigned int num, int length)
{
	str[length] = '\0';
	while (length > 0)
	{
		length--;
		str[length] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int nbr)
{
	unsigned int	num;
	char			*result;
	int				length;

	length = ft_get_num_length(nbr);
	result = (char *)malloc(length + 1);
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		num = -nbr;
		ft_fill_digits(result + 1, num, length - 1);
	}
	else
	{
		num = nbr;
		ft_fill_digits(result, num, length);
	}
	return (result);
}