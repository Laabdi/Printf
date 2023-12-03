#include "ft_printf.h"


int ft_putnbr(long int nb)
{
    if(nb < 0)
    {
        ft_putchar('-'); 
        nb *= -nb;
    }
    if (nb > 9)
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
		return (0);
}

// int main()
// {
// 	ft_putnbr(42);
// }