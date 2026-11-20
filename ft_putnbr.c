/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 16:09:19 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 15:28:58 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fillnbr(long nb, char *buf);

int	ft_putnbr(int n)
{
	long	nb;
	int 	i;
	char	buf[10];
	int	len;

	nb = n;
	len = 0;
	if (nb == 0)
		return (write(1, "0", 1));
	if ( nb < 0)
	{
		len = write(1, "-", 1);
		if (len == -1)
			return (-1);
		nb = -nb;
	}
	i = ft_fillnbr(nb, buf);
	i = write(1, &buf[i], 10 - i);
	if (i == -1)
		return (-1);
	return (len + i);
}

int ft_fillnbr(long nb, char *buf)
{
    int i;

    i = 10;
    while (nb > 0)
    {
        buf[--i] = (nb % 10) + '0';
        nb /= 10;
    }
    return (i);
}
