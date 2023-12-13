/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:17:27 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 12:14:29 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conver(char type, int *count, va_list *args)
{
	if (type == 'c')
		*count += ft_putchar1(va_arg(*args, int));
	if (type == 's')
		*count += ft_putstr(va_arg(*args, char *));
	if (type == 'p')
		*count += ft_putptr(va_args(*args, unsigned long));
	if (type == 'i' || type == 'd')
		*count += ft_putint(va_arg(*args, int));
	if (type == 'u')
		*count += ft_printf_u(va_arg(*args, unsigned int));
	if (type == 'x')
		*count += ft_print_hexl(va_arg(*args, unsigned int));
	if (type == 'X')
		*count += ft_print_hexu(va_arg(*args, unsigned int));
	if (type == '%')
		*count += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
		}
		else if (str[i + 1])
		{
			ft_conver(str[i + 1], &count, &args);
			i++;
		}
		i++;
	}
	return (count);
}
