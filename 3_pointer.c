/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_pointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/10 10:40:38 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;

	// ! STEP 1 : declarer un pointeur sur 'a'

	printf("\nValeur de a de la fonction MAIN = \033[1;31m %i \033[0m \n", a);
	printf("Adresse de a du MAIN = \033[1;31m %p \033[0m \n\n", &a);

	// ! STEP 2 : Afficher les pointeurs (adresse + dereference de pointeur)
	// printf("Valeur de ptr_a = \033[1;31m %p \033[0m \n\n", ); // valeur du pointer de a
	
	// printf("Valeur vers laquelle POINTE ptr_a = \033[1;31m %i \033[0m \n\n", ); // valeur dereferencee du pointer de a
	
	printf("================\n\n");

	
	printf("Valeur de b de la fonction MAIN = \033[1;32m %i \033[0m \n", b);
	printf("Adresse de b du MAIN = \033[1;32m %p\033[0m \n\n", &b);
	
	// ! STEP 3 : Declarer un pointeur sur b (adresse + dereference de pointeur)
	// printf("Valeur de ptr_b = \033[1;31m %p \033[0m \n\n", ); // valeur du pointer de a
	
	// printf("Valeur vers laquelle POINTE ptr_b = \033[1;31m %i \033[0m \n\n", ); // valeur dereferencee du pointer de a

	
	// ! STEP 4 : Changer la valeur du pointeur sur a + le print
	
	// printf("Valeur de ptr_a = \033[1;31m %p \033[0m \n\n", ); // valeur du pointer de a
	// printf("Valeur vers laquelle POINTE ptr_a = \033[1;31m %i \033[0m \n\n", ); // valeur dereferencee du pointer de a
	
	
}