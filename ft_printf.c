/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:51:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/05/14 13:03:21 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	do_conversion(const char *str, va_list *arg_list)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(*arg_list, int)));
	if (*str == '%')
		return (ft_putchar('%'));
	if (*str == 's')
		return (ft_putstr(va_arg(*arg_list, char *)));
	if (*str == 'u')
		return (ft_putbase(va_arg(*arg_list, unsigned int), 10, BASE10));
	if (*str == 'X')
		return (ft_putbase(va_arg(*arg_list, unsigned int), 16, BASE16U));
	if (*str == 'x')
		return (ft_putbase(va_arg(*arg_list, unsigned int), 16, BASE16L));
	if (*str == 'i' || *str == 'd')
		return (ft_putint(va_arg(*arg_list, int)));
	if (*str == 'p')
		return (ft_putptr(va_arg(*arg_list, void *)));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		count;
	int		written;

	if (!str)
		return (-1);
	va_start (arg_list, str);
	count = 0;
	written = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			written = do_conversion(str, &arg_list);
		}
		else
			written = write(1, str, 1);
		if (written == -1)
			return (va_end(arg_list), -1);
		count += written;
		str++;
	}
	va_end(arg_list);
	return (count);
}
