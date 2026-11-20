/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:17:09 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 15:08:48 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


int	ft_puthex_lower(unsigned int n)
{
	int	i;
	int	len;
	char	buf[16];
	char	*hex;

	hex = "0123456789abcdef";
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
		i--;
		buf[i] = hex[n % 16];
		n /= 16;
	}
	i = write(1, &buf[i], 16 - i);
	if (i == -1)
		return (-1);
	len += i;
	return (len);
}
