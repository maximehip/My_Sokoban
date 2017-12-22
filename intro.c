/*
** EPITECH PROJECT, 2017
** Main function
** File description:
** Main function for my_sokoban
*/

#include <ncurses.h>
#include <game.h>

void intro (char *buffer)
{
	int key;
	int x;
	int y;
	
	initscr();

	start_color();
	init_pair(0, COLOR_RED, COLOR_BLACK);
	
	attron(COLOR_PAIR(0));
	mvwprintw(stdscr, LINES / 2, COLS / 2.7, "Welcome in My_sokoban");
	mvwprintw(stdscr, LINES / 1.6, COLS / 3.8, "Press p to play and e to open editor");
	attroff(COLOR_PAIR(0));
	refresh();
	key = getch();

	if (key == 112) {
	        endwin();
	} else if (key == 101) {
		map_editor(buffer);
	}
}
