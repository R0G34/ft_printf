/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:15:11 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 12:06:58 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexu(unsigned long n)
{
	char	*str;
	int		count;

	str = ft_itoa_base(num, HEXU);
	count = 0;
	ft_putstr_fd(str, 1);
	count = st_strlen(str);
	free (str);
	return (count);
}
