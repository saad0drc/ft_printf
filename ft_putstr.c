/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 11:15:44 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 14:48:23 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	int	i;
	int	ret;
	
	i = 0;
	while (s[i])
	{
		ret = ft_putchar(s[i]);
		if (ret == -1)
			return (-1);
		i++;
	}
	return (i);
}
