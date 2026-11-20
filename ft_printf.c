/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 10:51:29 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 14:43:57 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char c);

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int	res;

	va_start(ap, format);
	res = 0;
	while (*format)
	{
		if(*format == '%')
		{
			res += ft_format(ap, *++format);
			if (res == -1)
				break ;
		}
		else
			res += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (res);
}

int	ft_format(va_list ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_putaddr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_lower(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (ft_puthex_upper(va_arg(ap, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

