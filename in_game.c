/*
** EPITECH PROJECT, 2017
** In_game
** File description:
** It will display when the game begun
*/

#include <ncurses.h>
#include <game.h>

void in_game (char *buffer, int obj) {

	int score_t = 0;
	int x;
	int y;
	int key;
	int score_size = 3;
	
	initscr();
	while (1) {
                getmaxyx(stdscr, y, x);

		WINDOW *win = newwin(y,x,0,0);
	        WINDOW *score = newwin(score_size, x,y - score_size,0);

                keypad(win, TRUE);
		mvwprintw(score, 0, 0, "Score: %i", score_t);
                mvwprintw(win, 0, 0, buffer);
                wrefresh(win);
	        wrefresh(score);
                refresh();
	        key = wgetch(win);
                moving(&score_t, key, buffer);
	        if (score_t == obj) {
		        break;
	        }
        }
	clear();
	endwin();
}

void moving(int *score, int key, char *buffer)
{
        int i = 0;

	if (key == KEY_RIGHT || key == 100) {
                move_forward(buffer, score);
	} else if (key == KEY_LEFT || key == 113) {
	        move_left(buffer, score);
        } else if (key == KEY_DOWN || key == 115) {
                move_down(buffer, score);
	} else if (key == KEY_UP || key == 122) {
		move_up(buffer, score);
        }
}

