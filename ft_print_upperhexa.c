#include "ft_printf.h"

int ft_print_upperhexa(unsigned int nb)
{
    int count = 0;
    char *s = "0123456789ABCDEF";
    if (nb >= 16)
    {
        count += ft_print_upperhexa(nb / 16);
        count += ft_putchar(s[nb % 16]);
    }
    if (nb < 16)
        count += ft_putchar(s[nb]);
    return (count);
}