
#include <stdio.h>
#include "printf.h"
#include <limits.h>

int main (void)
{
	int my;
	int their;
	// printf("------------test no conversions-------------\n");
	// my = ft_printf("Maximka kakashka\n");
	// their = printf("Maximka kakashka\n");
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test chars-------------\n");
	// my = ft_printf("Maximka %c computerk%c\n", 'a', 'a');
	// their = printf("Maximka %c computerk%c\n", 'a', 'a');
	// printf("My:%d VS Their:%d\n\n\n", my, their);



	// printf("------------empty printf-------------\n");
	// my = ft_printf("");
	// their = printf("");
	// printf("My:%d VS Their:%d\n\n\n", my, their);


	// printf("------------test chars-------------\n");
	// my = ft_printf("Maximka %% computerk%%\n");
	// their = printf("Maximka %% computerk%%\n");
	// printf("My:%d VS Their:%d\n\n\n", my, their);


	// printf("------------test str-------------\n");
	// my = ft_printf("Maximka %s \n", "computerka");
	// their = printf("Maximka %s \n", "computerka");
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test null str-------------\n");
	// my = ft_printf("Maximka ne %s\n", (char *)NULL);
	// their = printf("Maximka ne %s\n", (char *)NULL);
	// //printf ("%d\n", their);
	// printf("My:%d VS Their:%d\n\n\n", my, their);



	// printf("------------test unsigned int (u)-------------\n");
	// my = ft_printf("%u\n", INT_MAX+10);
	// their = printf("%u\n", INT_MAX+10);
	// //printf ("%d\n", their);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test unsigned int (u) OVERFLOW-------------\n");
	// my = ft_printf("%u\n",UINT_MAX+1);
	// their = printf("%u\n", UINT_MAX+1);
	// //printf ("%d\n", their);
	// printf("My:%d VS Their:%d\n\n\n", my, their);



	// printf("------------test base 16 lowercase (x)-------------\n");
	// my = ft_printf("%x\n", 123456789);
	// their = printf("%x\n", 123456789);
	// //printf ("%d\n", their);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test base 16 lowercase (x) NEGATIVE  -------------\n");
	// my = ft_printf("%x\n", -123456789);
	// their = printf("%x\n", -123456789);
	// printf("My:%d VS Their:%d\n\n\n", my, their);


	// printf("------------test base 16 uppercase (x)-------------\n");
	// my = ft_printf("%X\n", 123456789);
	// their = printf("%X\n", 123456789);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test base 16 uppercase (X) NEGATIVE  -------------\n");
	// my = ft_printf("%X\n", -123456789);
	// their = printf("%X\n", -123456789);
	// printf("My:%d VS Their:%d\n\n\n", my, their);


	// printf("------------test integer (i)  -------------\n");
	// my = ft_printf("%i\n", -123456789);
	// their = printf("%i\n", -123456789);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test integer (i) edgecase: Overflow  -------------\n");
	// my = ft_printf("%i\n", INT_MAX+1);
	// their = printf("%i\n", INT_MAX+1);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test integer (i) edgecase: 0  -------------\n");
	// my = ft_printf("%i\n", -0);
	// their = printf("%i\n", -0);
	// printf("My:%d VS Their:%d\n\n\n", my, their);



	// printf("------------test decimal base 10 (d)  -------------\n");
	// my = ft_printf("%d\n", -136);
	// their = printf("%d\n", -136);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test decimal base 10 (d) edgecase: Overflow  -------------\n");
	// my = ft_printf("%d\n", INT_MAX+1);
	// their = printf("%d\n", INT_MAX+1);
	// printf("My:%d VS Their:%d\n\n\n", my, their);

	// printf("------------test decimal base 10 (d) edgecase: 0  -------------\n");
	// my = ft_printf("%d\n", -0);
	// their = printf("%d\n", -0);
	// printf("My:%d VS Their:%d\n\n\n", my, their);


	printf("------------test void pointer (p) -------------\n");
	int target = 42;
	my = ft_printf("%p", &target);
	their = printf("\n%p", &target);
	printf("\nMy:%d VS Their:%d\n\n\n", my, their);


	printf("------------test void pointer (p) edgecase : NULL -------------\n");
	// my = ft_printf("%p\n", (char *)NULL);
	// their = printf("%p\n", (char *)NULL);
	// printf("My:%d VS Their:%d\n\n\n", my, their);





	//TRAAAAAAAAAAAAAAAAAAAAASH
	//my  =  ft_printf("%s");
	//their = printf("%s");
	//printf ("%s", their);
	//printf("My:%d VS Their:%d\n\n\n", my, their);


	// printf("------------test weird %%conversions-------------\n");
	// my  =  ft_printf("Maximka computerk %%%%\n");
	// their = printf("Maximka computerk %%%%\n");
	// printf("My:%d VS Their:%d\n\n\n", my, their);



}
