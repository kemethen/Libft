#include "libft.h"

void ft_putnbruc(unsigned char c)
{
	if (c >= 10)
		ft_putnbruc(c / 10);
	ft_putchar(c % 10 + 48);
}
