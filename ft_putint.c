/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:21:27 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 12:03:44 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_putint(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count += 1;
	count += ft_putnbr_fd(n, 1);
	return (count);
}
