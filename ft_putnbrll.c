#include "libft.h"

void ft_putnbrll(long long int n)
{
  if (n < 0)
  {
    ft_putchar('-');
    n = -n;
  }
  if (n >= 10)
    ft_putnbrll(n / 10);
  ft_putchar(n % 10 + 48);
}
