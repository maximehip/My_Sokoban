/*
** EPITECH PROJECT, 2017
** Help 
** File description:
** Display help message
*/

#include <my.h>

void help (void)
{
	my_putstr("USAGE");
	my_putchar('\n');
	my_putstr("        ./my_sokoban map");
	my_putchar('\n');
	my_putstr("DESCRIPTION");
	my_putchar('\n');
	my_putstr("        map file representing the warehouse map, containing'#' for walls, 'P' for the player, 'X' for boxes and '0' for storage locations.");
	my_putchar('\n');
}
