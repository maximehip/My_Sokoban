/*
** EPITECH PROJECT, 2017
** Main function
** File description:
** Main function for my_sokoban
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <my.h>
#include <game.h>

int main (int ac, char **argv)
{
	int fd;
	int size;
	char buffer[750];
	int obj;
	
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || argv[1] == "-h") {
		help();
		return (84);
	}
       
	size = read(fd, &buffer, 750);
	obj = calcul_obj(buffer);
	check_map(buffer);
	intro(buffer);
	in_game(buffer, obj);
	end_game();
	return 0;
}
