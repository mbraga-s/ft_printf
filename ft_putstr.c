/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:56:57 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/28 16:13:39 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *len)
{
	unsigned int	i;

	i = 0;
	if (!s)
		ft_putstr ("(null)", len);
	else
		while (s[i])
			ft_putchar (s[i++], len);
}
