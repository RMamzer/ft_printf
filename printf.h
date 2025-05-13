/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 11:15:24 by rmamzer           #+#    #+#             */
/*   Updated: 2025/05/13 19:38:54 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define BASE16U "0123456789ABCDEF"
# define BASE16l "0123456789abcdef"
# define BASE10 "0123456789"

int	ft_printf(const char* format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putbase(unsigned long num, unsigned int base, char *str);
int	ft_putint(long num);
int	ft_putptr(void *ptr);
#endif
