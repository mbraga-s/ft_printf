/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:48:00 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 15:51:33 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	char	c;

	if (n == INT_MIN)
	{
		ft_putstr("-2", len);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar ('-', len);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr ((n / 10), len);
		n = n % 10;
	}
	if (n <= 9 && n >= 0)
	{
		c = (48 + n);
		ft_putchar (c, len);
	}
}
