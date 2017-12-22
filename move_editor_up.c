/*
** EPITECH PROJECT, 2017
** Move Editor Up
** File description:
** allow user to move editor up
*/

#include <game.h>

void move_editor_up (char *buffer)
{
	int i = 0;
        int distance;
        char save;

        while (buffer[i] != 'E') {
                i = i + 1;
        }

	distance = calcul_distance(buffer);

	if (buffer[i - distance - 1] == 'X' && buffer[i - distance - 1] \
== ' ') {
                save = buffer[i - distance - 2];
                buffer[i - distance - 2] = buffer[i - distance - 1];
                buffer[i - distance - 1] = save;
        } else if (buffer[i - distance - 1] == 'X' && buffer[i - distance - 2] \
== 'O') {
                buffer[i - distance - 2] = buffer[i - distance - 1];
                buffer[i - distance - 1] = ' ';
        } else {
                save = buffer[i];
                buffer[i] = buffer[i - distance - 1];
                buffer[i - distance - 1] = save;
        }

}
