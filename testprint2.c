/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yuan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamzer <rmamzer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:05:45 by jinzhang          #+#    #+#             */
/*   Updated: 2025/05/14 13:02:58 by rmamzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <limits.h>
#include <fcntl.h>
#include "printf.h"

int	main(void)
{
	int 			mine_return = 0;
	int 			std_return = 0;
	char 			a = 'A';
	char 			*b= NULL;
	int				c = 0;
	int				d = -420;
	unsigned int 	e = INT_MIN;
	unsigned int 	f = 255;
	unsigned int 	g = 27544355;

	mine_return = ft_printf("Mine: Hex: %x\n", 0);
	std_return = printf("Std : Hex: %x\n", 0);
	printf("1Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: HEX: %X\n", 305441741);
	std_return = printf("Std : HEX: %X\n", 305441741);
	printf("2Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: Large hex: %x\n", UINT_MAX);
    std_return  = printf("Std : Large hex: %x\n", UINT_MAX);
    printf("3Returns: mine=%d, std=%d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Unsigned int:%u\n", UINT_MAX);
	std_return = printf("Std : Unsigned int:%u\n", UINT_MAX);
	printf("4Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Address: %p\n", &main);
	std_return = printf("Std : Address: %p\n", &main);
	printf("5Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Zero: %u %d\n", 0u, 0);
	std_return = printf("Std : Zero: %u %d\n", 0u, 0);
	printf("6Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Neg unsigned: %u\n", INT_MIN);
	std_return = printf("Std : Neg unsigned: %u\n", INT_MIN);
	printf("7Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: Empty string: '%s'\n", "");
    std_return  = printf("Std : Empty string: '%s'\n", "");
    printf("8Empty string returns: mine=%d, std=%d\n\n", mine_return, std_return);

	mine_return = ft_printf("[c:%c],[s:%s],[d:%d],[i:%i],[ui:%u],[hex::%x],[HEX:%X],[ptr:%p],[%%:%%],[min:%i],[max:%i]\n", a, b, c, d, e,f,g,b, INT_MIN, INT_MAX);
	std_return  = printf("[c:%c],[s:%s],[d:%d],[i:%i],[ui:%u],[hex::%x],[HEX:%X],[ptr:%p],[%%:%%],[min:%i],[max:%i]\n", a, b, c, d, e,f,g,b, INT_MIN, INT_MAX);
	printf("9Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Pointer NULL: %p\n", NULL);
	std_return = printf("Std : Pointer NULL: %p\n", NULL);
	printf("10Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: NULL string: %s\n", b);
    std_return  = printf("Std : NULL string: %s\n", b);
    printf("11Returns: mine=%d, std=%d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: Neg unsigned: %u\n", (unsigned int)d);
    std_return  = printf("Std : Neg unsigned: %u\n", (unsigned int)d);
    printf("12Returns: mine=%d, std=%d\n\n", mine_return, std_return);

    mine_return = ft_printf("");
    std_return  = printf("");
    printf("13Empty format returns: mine=%d, std=%d\n\n", mine_return, std_return);

	mine_return = ft_printf(NULL);
    std_return  = printf(NULL);
    printf("14Null format returns: mine=%d, std=%d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: %%%""%%\n");
    std_return  = printf("Std : %%%""%%\n");
    printf("15Multiple percents returns: mine=%d, std=%d\n\n", mine_return, std_return);

	mine_return = ft_printf("Mine: Just percent: %%\n");
	std_return = printf("Std : Just percent: %%\n");
	printf("16Returns: ft_printf = %d, printf = %d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: Unknown: %k\n");
    std_return  = printf("Std : Unknown: %k\n");
    printf("17Returns: mine=%d, std=%d\n\n", mine_return, std_return);

    mine_return = ft_printf("Mine: Lone percent at end: %\n");
    std_return  = printf("Std : Lone percent at end: %\n");
    printf("18Returns: mine=%d, std=%d\n\n", mine_return, std_return);

	 // Close stdout to simulate a write error
	 close(1);

	 // Call ft_printf, which should now fail to write
	 int ret = ft_printf("Hello, world!\n");

	 // Print the result to stderr
	 if (ret == -1) {
		 fprintf(stderr, "ft_printf returned -1 on write error as expected.\n");
	 } else {
		 fprintf(stderr, "ft_printf did NOT return -1 (returned %d).\n", ret);
	 }

}
