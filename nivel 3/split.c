#include <stdlib.h>
#include <stdio.h>

#define WD_LEN 1000

char **ft_split(char *str)
{
	char	**array;
	int i = 0;
	int j = 0;
	int k;

	array = malloc(sizeof(char *) * WD_LEN);
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			array[j] = malloc(sizeof(char *) * WD_LEN);
			while (str[i] > 32)
				array[j][k++] = str[i++];
			array[j++][k] = '\0';
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}



int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}


main():
	char **strings
	int i = 1

	casos de erro
	strings = ft_split(argv[1])
	while (strings[i])
		printf(strings[i++])
	printf(strings[0])