/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:37:49 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/23 11:56:22 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *i)
{
	write(1, &c, 1);
	*i = *i + 1;
}

void	ft_putstr(char *str, int *i)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar(*str, i);
			str++;
		}
	}
	else
	{
		ft_putstr("(null)", i);
	}
}
