/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:18:11 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 11:18:23 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_putptr(unsigned long n)
{
	ft_putstr_fd("0x", 1);
	return (ft_print_hex(n) + 2);
}
