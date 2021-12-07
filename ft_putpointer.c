/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:44:47 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/30 17:57:29 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthexp(unsigned long long nb, int *count)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(tab[nb], count);
	}
	else
	{
		ft_puthexp(nb / 16, count);
		ft_puthexp(nb % 16, count);
	}
}

void	ft_putpointer(unsigned long long nb, int *count)
{
	ft_putchar('0', count);
	ft_putchar('x', count);
	ft_puthexp(nb, count);
}
