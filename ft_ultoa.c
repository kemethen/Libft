/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:16:42 by kemethen          #+#    #+#             */
/*   Updated: 2019/02/27 17:20:57 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n)
{
	long int	nbr;
	int			i;

	nbr = n;
	i = 0;
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr / 10 > 9)
	{
		i++;
		nbr = nbr / 10;
	}
	if (n < 0)
		return (i + 2);
	else
		return (i + 1);
}

char			*ft_ultoa(unsigned long n)
{
	unsigned long	nbr;
	int				i;
	char			*result;

	nbr = n;
	i = 0;
	if (!(result = (char *)malloc(sizeof(char) * ft_len(n) + 1)))
		return (NULL);
	while ((ft_len(n) - i) > 0 && n != 0 && nbr > 9)
	{
		result[ft_len(n) - i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	result[ft_len(n) + 1] = '\0';
	return (result);
}
