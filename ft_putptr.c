/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:01:19 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 16:17:32 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(long unsigned int c, int *len)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (c < 16)
	{	
		ft_putchar (ptr[c], len);
	}
	if (c >= 16)
	{
		ft_hex (c / 16, len);
		ft_hex (c % 16, len);
	}
}

void	ft_putptr(void *s, int *len)
{
	long unsigned int	i;

	if (!s)
		ft_putstr ("(nil)", len);
	else
	{
		ft_putstr ("0x", len);
		i = (long unsigned int)s;
		ft_hex (i, len);
	}
}
