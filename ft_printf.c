/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:51:32 by rmamzer           #+#    #+#             */
/*   Updated: 2025/05/12 20:20:17 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "printf.h"

int 	do_conversion(const char *str, va_list *arg_list)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(*arg_list, int)));
	return (-1);
}


int	ft_printf(const char* str, ...)
{
va_list	arg_list;
int	count;
int written;

if (!str)
	return (-1);
va_start (arg_list, str);
count = 0;
written = 0;
while (*str)
{
	if (*str =='%')
	{
		str++;
		written = do_conversion(str, &arg_list);
	}
	else
		written = write(1, str, 1);
	if (written == -1)
		return (-1);
	count += written;
	str++;
}
	va_end(arg_list);
	return (count);
}
