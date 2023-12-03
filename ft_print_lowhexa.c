#include "ft_printf.h"

int ft_print_lowhexa(unsigned int nb)
{
    char *s = "0123456789abcdef";
    if (nb > 16)
	{
		ft_print_lowhexa(nb / 16);
		ft_putchar(s[nb % 16]);
	}
    if(nb < 16)
    ft_putchar(s[nb]);
		return (0);
}