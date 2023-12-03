#include "ft_printf.h"

int ft_uputnbr(unsigned int nb)
{
	int count = 0;
    if (nb > 9)
	count +=ft_uputnbr(nb / 10);
	count +=ft_putchar((nb % 10) + '0');
		return (count);
}