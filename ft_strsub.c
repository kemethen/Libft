/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:41:37 by kemethen          #+#    #+#             */
/*   Updated: 2019/05/23 14:07:31 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (!(s2 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = (size_t)start;
	while (len)
	{
		s2[i - start] = s[i];
		++i;
		--len;
	}
	s2[i - start] = '\0';
	return (s2);
}
