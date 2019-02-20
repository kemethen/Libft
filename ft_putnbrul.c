#include "libft.h"

void	ft_putnbrul(unsigned long n)
{
	if (n >= 10)
		ft_putnbrul(n / 10);
	ft_putchar(n % 10 + 48);
}
