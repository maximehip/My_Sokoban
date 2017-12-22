/*
** EPITECH PROJECT, 2017
** Move Editor Forward
** File description:
** Allow to move editor forward
*/

#include <my.h>

void move_editor_forward(char *buffer)
{

        int i = 0;
        int j = 0;
        char save;

        while (buffer[i] != 'E') {
                i = i + 1;
        }

	if (buffer[i + 1] == '#') {

        } else if (buffer[i + 1] == 'X' && buffer[i + 2] == ' ') {
                save = buffer[i + 2];
                buffer[i + 2] = buffer[i + 1];
                buffer[i + 1] = save;
        } else if (buffer[i + 1] == 'X' && buffer[i + 2] == 'O') {
                buffer[i + 2] = buffer[i + 1];
                buffer[i + 1] = buffer[i - 1];
        }else {
                save = buffer[i + 1];
                buffer[i + 1] = buffer[i];
                buffer[i] = save;
        }

}
