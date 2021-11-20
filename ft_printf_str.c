/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:26:36 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:58:05 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str, int *count)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*count += ft_strlen("(null)");
	}
	else
	{
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
	}
	return (*count);
}
