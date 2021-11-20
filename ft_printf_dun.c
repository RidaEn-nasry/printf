/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:26:08 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:57:13 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_putdun_base(unsigned int nbr, int base)
{
	char	*str;
	int		i;

	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	str = malloc((ft_numiterate(nbr) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (nbr > 0)
	{
		str[i++] = '0' + (nbr % base);
		nbr /= base;
	}
	ft_revchar_tab(str, i);
	str[i] = '\0';
	return (str);
}

int	ft_printf_dun(unsigned int nbr, int *count)
{
	char	*ret;

	ret = ft_putdun_base(nbr, 10);
	ft_putstr_fd(ret, 1);
	*count += ft_strlen(ret);
	free(ret);
	return (*count);
}
