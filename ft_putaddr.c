/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:18:17 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 15:01:57 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(void *p)
{
	char			*hex;
	char			buf[16];
	unsigned long		addr;
	int			i;
	int			len;

	hex = "0123456789abcdef";
	if (!p)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)p;
	i = 16;
	while (addr > 0)
	{
		i--;
		buf[i] = hex[addr % 16];
		addr /= 16;
	}
	len = write(1, "0x", 2);
	if (len == -1)
		return (-1);
	i = write(1, &buf[i], 16 - i);
	if (i == -1)
		return (-1);
	len += i;
	return (len);
}
