/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** 
*/

#include <my.h>

void my_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i = i + 1;
	}
}
