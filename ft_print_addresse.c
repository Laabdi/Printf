#include "ft_printf.h"

static int ft_print_lowh(unsigned long nb)
{
    int count = 0;
    char *s = "0123456789abcdef";
    if (nb > 16)
	{
    count += ft_print_lowh(nb / 16);
    count += ft_putchar(s[nb % 16]);
	}
    if(nb < 16)
    count += ft_putchar(s[nb]);
		return count;
}
int ft_print_addresse(void *ptr)
{
    unsigned long num;
    int count = 0;
    num = (unsigned long)ptr;
    count += write(1, "0x", 2);
    count += ft_print_lowh(num);
        return count;
}
