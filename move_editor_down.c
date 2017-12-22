/*
** EPITECH PROJECT, 2017
** Move_editor_down
** File description:
** Allorw user to move down
*/

#include <game.h>

void move_editor_down (char *buffer)
{

	 int i = 0;
        int distance;
        char save;

        while (buffer[i] != 'E') {
                i = i + 1;
        }

	  distance = calcul_distance(buffer);

	  if (buffer[distance + i + 1] == 'X' && buffer[distance + i + 2] \
== ' ') {
                save = buffer[distance + i + 2];
                buffer[distance + i + 2] = buffer[distance + i + 1];
                buffer[distance + i + 1] = save;
        } else if (buffer[distance + i + 1] == 'X' && buffer[distance + i + 2] \
== 'O') {
                buffer[distance + i + 2] = buffer[distance + i + 1];
                buffer[distance + i + 1] = ' ';
        } else {
                save = buffer[i];
                buffer[i] = buffer[distance + i + 1];
                buffer[distance + i + 1] = save;
        }

}
