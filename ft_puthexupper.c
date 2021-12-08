/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:43:33 by zcherrad          #+#    #+#             */
/*   Updated: 2021/12/08 22:25:59 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexupper(unsigned int nb, int *count)
{
	char	*tab;

	tab = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(tab[nb], count);
	}
	else
	{
		ft_puthexupper(nb / 16, count);
		ft_puthexupper(nb % 16, count);
	}
}
