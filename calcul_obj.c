/*
** EPITECH PROJECT, 2017
** Calcul_obj
** File description:
** This function file is used for calcul the number of O
*/

#include <game.h>

int calcul_obj(char *buffer)
{
	int i = 0;
	int result = 0;

	while (buffer[i] != '\0') {
		if (buffer[i] == 'O') {
			result = result + 1;
		}
		i = i + 1;
	}
	return result;
}
