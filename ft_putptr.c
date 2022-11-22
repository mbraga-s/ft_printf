/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:01:19 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/22 19:45:06 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putptr(void *s)
{
	s = (char *)s;
	printf("%p\n", s);
	write(1, &*s, 5);
}

void	main(void)
{
	char *ptr = "Heyo";

	ft_putptr(ptr);
}
