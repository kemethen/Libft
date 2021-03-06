/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:50:55 by kemethen          #+#    #+#             */
/*   Updated: 2019/04/30 18:56:48 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	v_zero(t_var *v)
{
	v->lpnt = 0;
	v->prc = 0;
	v->width = 0;
	v->mns = 0;
	v->neg = 0;
	v->plus = 0;
	v->zero = 0;
	v->dot = 0;
	v->space = 0;
	v->d = 0;
	v->nbr = 0;
	v->iszero = 0;
}

size_t	percent_lx(char const *str, va_list ap, t_var *v)
{
	if (str[v->i + 2] == 'x')
	{
		hexa_low_ul(va_arg(ap, unsigned long), v);
		v->j = v->i + 3;
	}
	if (str[v->i + 2] == 'X')
	{
		hexa_up_ul(va_arg(ap, unsigned long), v);
		v->j = v->i + 3;
	}
	return (v->j);
}

size_t	percent_l(char const *str, va_list ap, t_var *v)
{
	if (str[v->i + 1] == 'l')
	{
		if (str[v->i + 2] == 'l')
			++v->i;
		if (str[v->i + 2] == 'd' || str[v->i + 2] == 'i')
			percent_ld_and_li(va_arg(ap, long int), v);
		if (str[v->i + 2] == 'o')
		{
			percent_lo(va_arg(ap, unsigned long), v);
			v->j = v->i + 3;
		}
		if (str[v->i + 2] == 'u')
			percent_lu(va_arg(ap, unsigned long), v, str);
		v->j = percent_lx(str, ap, v);
	}
	return (v->j);
}

void	wd_prc_neg(t_var *v)
{
	v->prwd = joinfree(v->tmp, v->tmp2);
	if (v->neg != 0)
		v->tmp = ft_itoa(-ft_atoi(v->str));
	else
		v->tmp = ft_strdup(v->str);
	ft_memdel((void **)&v->str);
	v->str = joinfree(v->prwd, v->tmp);
	fillbuff(v);
}
