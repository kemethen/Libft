/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:19:57 by kemethen          #+#    #+#             */
/*   Updated: 2019/02/16 12:30:48 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*s2;
	size_t	i;

	s2 = ft_strnew(ft_strlen(str));
	i = 0;
	while (i < ft_strlen(str))
	{
		s2[i] = str[ft_strlen(str) - i - 1];
		++i;
	}
	return (s2);
}
