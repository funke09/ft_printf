/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:41:50 by zcherrad          #+#    #+#             */
/*   Updated: 2021/12/07 23:14:16 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_format_spec(va_list ap, char format, int *counter)
{
	if (format == '%')
		ft_putchar('%', counter);
	else if (format == 'x')
		ft_puthexm(va_arg(ap, unsigned int), counter);
	else if (format == 'X')
		ft_puthexupper(va_arg(ap, unsigned int), counter);
	else if (format == 'p')
		ft_putpointer(va_arg(ap, unsigned long long), counter);
	else if (format == 'u')
		ft_putunsg(va_arg(ap, unsigned int), counter);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), counter);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), counter);
	else if (format == 'c')
		ft_putchar(va_arg(ap, int), counter);
	else if (format != '\0')
		ft_putchar(format, counter);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	int			counter;
	int			i;

	va_start(ap, str);
	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			print_format_spec(ap, str[i], &counter);
		}
		else
			ft_putchar(str[i], &counter);
		if (str[i])
			i++;
	}
	va_end(ap);
	return (counter);
}
