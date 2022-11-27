/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:47:46 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/25 20:47:46 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbrhex(unsigned int c)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (c < 16)
	{	
		write (1, &ptr[c], 1);
	}
	if (c >= 16)
	{
		ft_putnbrhex (c / 16);
		ft_putnbrhex (c % 16);
	}
}

/* int 	main (void)
{
	unsigned int	a = 352234;

	ft_putnbrhex(a);
	printf("\n%x", a);
	return (0);
} */