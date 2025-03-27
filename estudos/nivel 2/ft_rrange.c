#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *array;
    int i;

    if(start < end)
        size = end - start + 1;
    else
        size = start - end + 1;
    array = (int *)malloc(sizeof(int) * size);
    if (!array)
        return (NULL);

    i = 0;
    while (i < size)
    {
        if (start < end)
            array[i] = end - i;
        else
            array[i] = end + i;
        i++;
    }
    return array;
}



#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*array;
	int	i;

	array = ft_rrange(1, 3);
	if (!array)
		return (1); // Verifica se a alocação falhou

	i = 0;
	while (i < 3) // Tamanho do array é 3
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");

	free(array); // Libera a memória alocada
	return (0);
}