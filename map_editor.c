/*
** EPITECH PROJECT, 2017
** Map_editor
** File description:
** Allow user to edit the map
*/

#include <ncurses.h>
#include <game.h>
#include <my.h>

void map_editor (char *buffer)
{
	int i = 0;
	int x;
	int y;
	int key;

	buffer[i] = 'E';

	initscr();
	while (1) {
		getmaxyx(stdscr, y, x);

		WINDOW *editor = newwin(y,x,0,0);
		keypad (editor, TRUE);
		mvwprintw(editor, 0, 0, buffer);
		wrefresh(editor);
		refresh();
		key = wgetch(editor);
		if (key == 100) {
			break;
		}
		moving_editor(key, buffer);
	}
	clear();
	endwin();
	intro(buffer);
}

void moving_editor(int key, char *buffer)
{
        int i = 0;
	
        
	switch(key) {
	case KEY_RIGHT:
		move_editor_forward(buffer);
		break;
        case KEY_LEFT:
		move_editor_left(buffer);
		break;
        case KEY_DOWN:
		move_editor_down(buffer);
		break;
        case KEY_UP:
		move_editor_up(buffer);
		break;
        case 112:
		place_player(buffer);
		break;
        case 115:
		place_point(buffer);
		break;
	}
}

void place_player(char *buffer)
{
	int i;
	char save;

	while (buffer[i] != 'P') {
		i = i + 1;
	}
	buffer[i] = ' ';
	i = 0;

	while (buffer[i] != 'E') {
		i = i + 1;
	}

	buffer[i] = save;
	buffer[i] = 'P';
	buffer[i + 1] = 'E';
}

void place_point(char *buffer)
{
	int i;

	while (buffer[i] != 'E') {
		i = i + 1;
	}
	buffer[i + 1] = 'X';
	buffer[i + 2] = 'O';
}
