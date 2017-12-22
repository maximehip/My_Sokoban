/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it
** File description:
** 
*/

#include <my.h>

int noneg(int n){
	if (n < 0){
		return (-n);
	} else  {
		return (n);
	}
}

void print_all(int nb){
	if (nb <= 9)
	{
		my_putchar('0' + nb);
	}else {
		print_all(nb / 10);
		print_all(nb % 10);
	}
}

int my_put_nbr (int nb){
	if (nb < 0)
	{
		my_putchar('-');
		nb = noneg(nb);
	}
	print_all(nb);
//	my_putchar('\n');
	return 0;
}
