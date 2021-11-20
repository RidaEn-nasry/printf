/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:26:13 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:57:25 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long nbr, int *count, int format)
{
	char	*ret;
	int		i;

	i = -1;
	ret = NULL;
	if (format == 'x' || format == 'X')
	{
		ret = ft_itoa_base((unsigned int)nbr, 16);
		if (format == 'x')
			while (ret[++i])
				ft_putchar_fd(ret[i], 1);
		else if (format == 'X')
			while (ret[++i])
				ft_putchar_fd(ft_toupper(ret[i]), 1);
	}
	else if (format == 'p')
	{
		ret = ft_itoa_base(nbr, 16);
		while (ret[++i])
			ft_putchar_fd(ret[i], 1);
	}
	free(ret);
	*count += i;
	return (*count);
}
