/*
** EPITECH PROJECT, 2017
** Game Header
** File description:
** Header for game
*/


void intro(char *buffer);
void help(void);
void moving(int *score, int key, char *buffer);
void move_forward(char *buffer, int *score);
void move_left(char *buffer, int *score);
void move_down(char *buffer, int *score);
void end_game();
int calcul_obj(char *buffer);
void move_up (char *buffer, int *score);
int calcul_distance(char *buffer);
int check_map(char *buffer);
void in_game (char *buffer, int obj);
void map_editor (char *buffer);
void moving_editor(int key, char *buffer);
void move_editor_forward(char *buffer);
void move_editor_left(char *buffer);
void move_editor_down(char *buffer);
void move_editor_up(char *buffer);
void moving(int *score, int key, char *buffer);
void place_player(char *buffer);
void place_point(char *buffer);
