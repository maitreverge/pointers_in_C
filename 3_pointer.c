/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_pointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/12 09:32:45 by flverge          ###   ########.fr       */
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

	printf("\nValeur de a de la fonction MAIN =  %i  \n", a);
	printf("Adresse de a du MAIN =  %p  \n\n", &a);

	// ! STEP 2 : Afficher les pointeurs (adresse + dereference de pointeur)
	// printf("Valeur de ptr_a =  %p  \n\n", ); // valeur du pointer de a
	
	// printf("Valeur vers laquelle POINTE ptr_a =  %i  \n\n", ); // valeur dereferencee du pointer de a
	
	printf("================\n\n");

	
	printf("Valeur de b de la fonction MAIN =  %i  \n", b);
	printf("Adresse de b du MAIN =  %p \n\n", &b);
	
	// ! STEP 3 : Declarer un pointeur sur b (adresse + dereference de pointeur)
	// printf("Valeur de ptr_b =  %p  \n\n", ); // valeur du pointer de a
	
	// printf("Valeur vers laquelle POINTE ptr_b =  %i  \n\n", ); // valeur dereferencee du pointer de a

	
	// ! STEP 4 : Changer la valeur du pointeur sur a + le print
	
	// printf("Valeur de ptr_a =  %p  \n\n", ); // valeur du pointer de a
	// printf("Valeur vers laquelle POINTE ptr_a =  %i  \n\n", ); // valeur dereferencee du pointer de a
	
	
}