/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:26:24 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:57:34 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int nbr, int *count)
{
	char	*ret;

	ret = ft_itoa(nbr);
	ft_putnbr_fd(nbr, 1);
	*count += ft_strlen(ret);
	free(ret);
	return (*count);
}
