/*
** EPITECH PROJECT, 2017
** Move editor Left
** File description:
** Allow user to move editor left
*/

void move_editor_left(char *buffer)
{
	int i = 0;
        char save;

        while (buffer[i] != 'E') {
                i = i + 1;
        }

	if (buffer[i - 1] == 'X' && buffer[i - 2] == ' ') {
                save = buffer[i - 2];
                buffer[i - 2] = buffer[i - 1];
                buffer[i - 1] = save;
        } else if (buffer[i - 1] == 'X' && buffer[i - 2] == 'O') {
                buffer[i - 2] = buffer[i - 1];
                buffer[i - 1] = buffer[i + 1];
        }else {
                save = buffer[i - 1];
                buffer[i - 1] = buffer[i];
                buffer[i] = save;
        }
}
