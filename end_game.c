/*
** EPITECH PROJECT, 2017
** End_game
** File description:
** Display the end of game with score
*/

#include <ncurses.h>
#include <game.h>

void end_game ()
{
	int key;
	int x;
	int y;

	initscr();
	start_color();
	init_pair(0, COLOR_RED, COLOR_BLACK);

	attron(COLOR_PAIR(0));
	mvwprintw(stdscr, LINES / 2, COLS / 2.7, "LEVEL FINISHED!");
	mvwprintw(stdscr, LINES / 1.6, COLS / 2.5, "You have finished the game\n");
	attroff(COLOR_PAIR(0));
	refresh();
	key = getch();
	endwin();
}
