#include "ft_printf.h"


int ft_print_upperhexa(unsigned int nb)
{
    char *s = "0123456789ABCDEF";
    if (nb > 16)
    {
	    ft_print_upperhexa(nb / 16);
        ft_putchar(s[nb % 16]);
    }
    if(nb < 16)
    ft_putchar(s[nb]);
    return (0);
}