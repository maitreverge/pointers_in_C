/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_variables.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:09:40 by flverge           #+#    #+#             */
/*   Updated: 2024/09/09 21:06:53 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// Ceci est la façon de déclarer une variable en C.
	int		var_1;
	char	var_2;
	double	var_3;

	// Ceci est une façon d'assigner une valeur à une variable en C.
	var_1 = 42;
	var_2 = 'A';
	var_3 = 42.42;

	// Impression des valeurs des 3 variables sur STDOUT.
	printf("var_1 = %i\n", var_1);
	printf("var_2 = %c\n", var_2);
	printf("var_3 = %f\n", var_3);

	// Fonctionnement de printf 
	printf("Ceci est un texte\n"); // Texte simple avec un retour à la ligne `\n`
	printf("Ceci est un texte avec la var_1 = %i \n", var_1); // Texte simple + 1 variable
	printf("Ceci est un texte avec la var_1 = %i et la var_2 = %c \n", var_1, var_2); // Texte simple + 2 variables

	// Regarder sur internet la signification des `placeholders` de la fonction printf
}