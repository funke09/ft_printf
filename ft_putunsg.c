/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:50:08 by zcherrad          #+#    #+#             */
/*   Updated: 2021/12/08 22:25:00 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsg(unsigned int nb, int *count)
{
	if (nb < 10)
	{
		ft_putchar('0' + nb, count);
	}
	else
	{
		ft_putunsg(nb / 10, count);
		ft_putunsg(nb % 10, count);
	}
}
