#include "libft.h"

void	ft_putnbrl(long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbrl(n / 10);
	ft_putchar(n % 10 + 48);
}
