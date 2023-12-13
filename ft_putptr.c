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