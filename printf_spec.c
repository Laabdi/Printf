#include "ft_printf.h"

int printf_spec(va_list arg, char c)
{
    int count;
    count = 0;
    if( c == '%')
        count +=ft_putchar('%');
        else if (c == 'c')
        count +=ft_putchar(va_arg(arg, int));
        else if (c == 's')
        count +=ft_putstr(va_arg(arg,char *));
        else if(c == 'x')
        count +=ft_print_lowhexa(va_arg(arg,unsigned int));
        else if (c == 'X')
        count +=ft_print_upperhexa(va_arg(arg,unsigned int));
        else if(c == 'p')
        count +=ft_print_addresse(va_arg(arg,void *));
        else if (c == 'd' || c == 'i')
        count +=ft_putnbr((long)va_arg(arg,int));
        else if( c == 'u')
        count +=ft_uputnbr((long)va_arg(arg,unsigned int));
        return (count);

}