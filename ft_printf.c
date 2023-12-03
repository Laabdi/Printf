#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list arg;

    i = 0;
    count = 0;
    if(!format)
        return (-1);
    va_start(arg, format);
    while(format[i])
    {
        if (format[i] ==  '%' && ft_strchr("csxXpdui%", format[i + 1]))
        {
            count += printf_spec(arg, format[i + 1]); 
            i++;
        }
        else
        {
            count += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(arg);
    return (count);
}
