#include "libft.h"

void	ft_putnbrc(char c)
{
	if (c == -128)
	{
		ft_putstr("-128");
		return ;
	}
	if (c < 0)
	{
		ft_putchar('-');
		c = -c;
	}
	if (c >= 10)
		ft_putnbrc(c / 10);
	ft_putchar(c % 10 + 48);
}
