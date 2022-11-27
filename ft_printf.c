/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:13:08 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/11/22 18:47:20 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		flag;

	va_start (arg, str);
	i = 0;
	flag = 0;
	while (str[i])
	{
		if (flag == 1)
		{
			if (str[i] == 'c')
				ft_putchar (va_arg(arg, int));
			else if (str[i] == 's')
				ft_putstr (va_arg(arg, char *));
	//		else if (str[i] == 'p')
	//			ft_putptr (va_arg(arg, void *));
			else if (str[i] == 'd' || str[i] == 'i')
				ft_putnbr (va_arg(arg, int));
			else if (str[i] == 'u')
				ft_unsputnbr (va_arg(arg, unsigned int));
			else if (str[i] == 'x')
				ft_putnbrhex(va_arg(arg, unsigned int));
			else if (str[i] == 'X')
				ft_upperputnbrhex(va_arg(arg, unsigned int));
			else if (str[i] == '%')
				ft_putchar (str[i]);
			flag = 0;
		}
		else if (str[i] == '%' && flag == 0)
			flag = 1;
		else
			ft_putchar (str[i]);
		i++;
	}
	va_end (arg);
}

int	main(void)
{
	char *ptr = "Heio mate";
	char a = 'v';
	int i = -23;
	unsigned int h = 352;

	ft_printf("%s  %c  %i %X", ptr, a, i, h);
	printf("\n%s  %c  %i %X", ptr, a, i, h);
}
