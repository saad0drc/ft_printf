/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:34:15 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 15:10:46 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
{
	int	i;
	int	len;
	char	buf[16];
	char	*hex;

	hex = "0123456789ABCDEF";
	len = 0;
	i = 16;
	if (n == 0)
	{
		len += write(1, "0", 1);
		if (len == -1)
			return (-1);
	}
	while (n > 0)
	{
		--i;
		buf[i] = hex[n % 16];
		n /= 16;
	}
	i = write(1, &buf[i], 16 - i);
	if (i == - 1)
		return (-1);
	len += i;
	return (len);
}	
