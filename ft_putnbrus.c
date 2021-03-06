/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:38:06 by kemethen          #+#    #+#             */
/*   Updated: 2019/02/18 17:38:20 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrus(unsigned short n)
{
	if (n >= 10)
		ft_putnbrus(n / 10);
	ft_putchar(n % 10 + 48);
}
