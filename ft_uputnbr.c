#include "ft_printf.h"

int ft_uputnbr(unsigned int nb)
{
    if (nb > 9)
	ft_uputnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
		return (0);
}