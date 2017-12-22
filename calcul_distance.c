/*
** EPITECH PROJECT, 2017
** Calcul_distance
** File description:
** Allow to calcul the number of charactere in one line
*/

int calcul_distance(char *buffer)
{
	int nb_charactere = 0;
	int i = 0;

	while (buffer[nb_charactere] != '\n') {
		nb_charactere = nb_charactere + 1;
	}

	return nb_charactere;
}
