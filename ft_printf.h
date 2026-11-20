/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:38:52 by sel-khya          #+#    #+#             */
/*   Updated: 2026/11/20 11:26:32 by sel-khya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FT_PRINTF
# define FT_PRINTF

# include <unistd.h>
# include <stdarg.h>

int	ft_putaddr(void *p);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);

# endif
