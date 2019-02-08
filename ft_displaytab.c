/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_displaytab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:10:37 by kemethen          #+#    #+#             */
/*   Updated: 2019/01/24 19:24:22 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_displaytab(char **tab)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (tab[i] != NULL)
	{
		i++;
		size++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
