/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:58:56 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/30 17:56:46 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	long long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-', count);
	}
	if (nbr < 10)
	{
		ft_putchar('0' + nbr, count);
	}
	else
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
}
