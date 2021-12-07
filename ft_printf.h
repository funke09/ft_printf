/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:48:47 by zcherrad          #+#    #+#             */
/*   Updated: 2021/11/28 18:46:43 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putunsg(unsigned int nb, int *count);
void	ft_putchar(char c, int *counter);
void	ft_puthexm(unsigned int nb, int *count);
void	ft_puthexupper(unsigned int nb, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putpointer(unsigned long long nb, int *count);
void	ft_putstr(char *str, int *counter);

#endif