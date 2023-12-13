#include "ft_printf.h"

void	ft_conversion(char type, int *count, va_list *args)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(*args, int));
	if (c == 's')
		*count += ft_putstr(va_arg(*args, char *));
	if (c == 'p')
		*count += ft_putptr(va_args(*args, unsigned long));
}