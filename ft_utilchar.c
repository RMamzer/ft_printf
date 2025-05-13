/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:10:21 by rmamzer           #+#    #+#             */
/*   Updated: 2025/05/13 19:55:09 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	return (write (1,&c, 1));
}

int	ft_putstr(char *str)
{
	int	written;
	int totalwritten;

	if (!str)
		return (write(1,"(null)", 6));

	written = 0;
	totalwritten = 0;
	while(*str)
	{
		written = write(1,str, 1);
		if (written ==-1)
			return (-1);
		totalwritten++;
		str++;
	}
	return(totalwritten);
}

int	ft_putbase(unsigned long num, unsigned int base, char *str)
{
	int total;
	int index;
	int written;

	total = 0;
	index = 0;
	written = 0;
	if (num > base - 1)
		total = ft_putbase(num/base, base, str);
	if (total == -1)
		return (-1);
	written = write(1, &str[num % base], 1);
	if (written == -1)
		return (-1);
	total += written;
	return (total);
}

int	ft_putint(long num)
{
	int printsign;
	int printnum;

	printsign = 0;
	printnum = 0;
	if (num < 0)
	{
		printsign = write(1,"-",1);
		num = -num;
	}
	printnum = ft_putbase(num, 10, BASE10);
	if (printnum == -1 || printsign == -1)
		return (-1);
	return (printsign + printnum);
}

int	ft_putptr( void *ptr)
{
	int	written;
	int	total;

	if (!ptr)
		return(ft_putstr("(nil)"));
	written = 0;
	total = 0;
	return(ft_putbase((unsigned long)ptr, 16, BASE16l));
}
