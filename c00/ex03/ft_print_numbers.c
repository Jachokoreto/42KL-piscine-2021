#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void)
{
    int i;
    i = 0;
    
    while ( i < 10)
    {
        write(1, &i, 1);
        i++;
    }
}