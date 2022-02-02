/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:33:42 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/23 11:53:36 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

void	ft_conversion(char c, va_list ap, int *i);
void	ft_conversion2(char c, va_list ap, int *i);
int		ft_printf(const char *fmt, ...);
void	ft_putchar(char c, int *i);
void	ft_putstr(char *str, int *i);
void	ft_putnbr(int nb, int *i);
void	ft_unsigned(unsigned int nb, int *i);
void	ft_hex(unsigned int nb, int *i);
void	ft_hexu(unsigned int nb, int *i);
void	ft_pointer(unsigned long p, int *i);

#endif