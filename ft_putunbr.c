/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:12:08 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 15:16:31 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	i;
	int	len;
	char	buf[10];
	int	ret;
	
	len = 0;
	i = 10;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		i--;
		buf[i] = (n % 10) + '0';
		n /= 10;
	}
	ret = write(1, &buf[i], 10 - i);
	if (ret == -1)
		return (-1);
	len += ret;
	return (len);
}
