/*
** EPITECH PROJECT, 2017
** Check_maps
** File description:
** This function check if map is valid
*/

#include <check_map.h>

int check_map(char *buffer)
{
	int i;

	while (buffer[i] != '\0') {
		if (ISValid(buffer[i])) {
			i = i + 1;
		} else {
			return 0;
		}
	}
	if (i != 0) {
		my_putstr("Invalid map");
		return (84);
	}
}
