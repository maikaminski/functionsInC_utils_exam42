#include <stdlib.h>

typedef struct s_point
{
    int x;
    int y;
} t_point;

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target;
    t_point p;

    if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
        return ;
    target = tab[begin.y][begin.x];
    if (tab[begin.y][begin.x] == 'F' || tab[begin.y][begin.x] != target)
        return ;
    tab[begin.y][begin.x] = 'F';
    
    p = (t_point){begin.x - 1, begin.y};
    flood_fill(tab, size, p);
    p = (t_point){begin.x + 1, begin.y};
    flood_fill(tab, size, p);
    p = (t_point){begin.y - 1, begin.x};
    flood_fill(tab, size, p);
    p = (t_point){begin.y + 1, begin.x};
    flood_fill(tab, size, p);
}