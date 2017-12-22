/*
** EPITECH PROJECT, 2017
** Move Left
** File description:
** allow user to move left
*/

#include <game.h>

void move_left(char *buffer, int *score)
{
       int i = 0;
	char save;

	while (buffer[i] != 'P') {
		i = i + 1;
	}

        if (buffer[i - 1] == '#') {
		
	} else if (buffer[i - 1] == 'X' && buffer[i - 2] == ' ') {
		save = buffer[i - 2];
		buffer[i - 2] = buffer[i - 1];
		buffer[i - 1] = save;
	} else if (buffer[i - 1] == 'X' && buffer[i - 2] == 'O') {
		buffer[i - 2] = buffer[i - 1];
		buffer[i - 1] = buffer[i + 1];
		*score = *score + 1;
	}else {
               	save = buffer[i - 1];
		buffer[i - 1] = buffer[i];
		buffer[i] = save;
	}

}
	
