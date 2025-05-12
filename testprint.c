
#include <stdio.h>
#include "printf.h"
int main (void)
{
	int my;
	int their;
	printf("------------test no conversions-------------\n");
	my  =  ft_printf("Maximka kakashka\n");
	their = printf("Maximka kakashka\n");
	printf("My:%d VS Their:%d\n\n\n", my, their);



	printf("------------test chars-------------\n");
	my  =  ft_printf("Maximka %c kakashka\n", 'Z');
	their = printf("Maximka %c kakashka\n", 'Z');
	printf("My:%d VS Their:%d\n\n\n", my, their);
}
