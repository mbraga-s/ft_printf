/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:47:46 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 15:51:39 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhex(unsigned int c, int *len)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (c < 16)
	{	
		ft_putchar (ptr[c], len);
	}
	if (c >= 16)
	{
		ft_putnbrhex (c / 16, len);
		ft_putnbrhex (c % 16, len);
	}
}
