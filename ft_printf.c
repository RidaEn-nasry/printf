/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:26:46 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:55:39 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_args(char convert, va_list args, int *count)
{
	if (convert == 'c')
		ft_printf_char(va_arg(args, int), count);
	else if (convert == 's')
		ft_printf_str(va_arg(args, char *), count);
	else if (convert == 'p')
		ft_printf_ptr(va_arg(args, void *), count);
	else if (convert == 'd' || convert == 'i')
		ft_printf_int(va_arg(args, int), count);
	else if (convert == 'u')
		ft_printf_dun(va_arg(args, unsigned int), count);
	else if (convert == 'x' || convert == 'X' )
		ft_printf_hex(va_arg(args, int), count, convert);
	else if (convert == '%')
		ft_printf_char('%', count);
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] != '%')
			ft_printf_char(input[i], &count);
		else if (input[i] == '%' && input[i + 1])
			ft_printf_args(input[++i], args, &count);
		i++;
	}
	va_end(args);
	return (count);
}
