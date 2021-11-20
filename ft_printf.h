/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:25:08 by ren-nasr          #+#    #+#             */
/*   Updated: 2021/11/20 18:56:02 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char(int c, int *count);
int		ft_printf_str(char *str, int *count);
int		ft_printf_ptr(void *ptr, int *count);
int		ft_printf_int(int nbr, int *count);
int		ft_printf_dun(unsigned int nbr, int *count);
int		ft_printf_hex(unsigned long nbr, int *count, int format);
int		ft_numiterate(unsigned long n);

char	*ft_itoa_base(unsigned long nbr, int base);
char	*ft_revchar_tab(char *tab, int size);

#endif
