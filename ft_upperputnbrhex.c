/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperputnbrhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:47:46 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 15:52:12 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_upperputnbrhex(unsigned int c, int *len)
{
	char	*ptr;

	ptr = "0123456789ABCDEF";
	if (c < 16)
	{	
		ft_putchar (ptr[c], len);
	}
	if (c >= 16)
	{
		ft_upperputnbrhex (c / 16, len);
		ft_upperputnbrhex (c % 16, len);
	}
}
