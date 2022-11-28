/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:01:52 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 15:52:06 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsputnbr(unsigned int n, int *len)
{
	char	c;

	if (n > 9)
	{
		ft_unsputnbr((n / 10), len);
		n = n % 10;
	}
	if (n <= 9 && n >= 0)
	{
		c = (48 + n);
		ft_putchar (c, len);
	}
}
