/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:42:37 by zcherrad          #+#    #+#             */
/*   Updated: 2021/12/08 22:25:47 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexm(unsigned int nb, int *count)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(tab[nb], count);
	}
	else
	{
		ft_puthexm(nb / 16, count);
		ft_puthexm(nb % 16, count);
	}
}
