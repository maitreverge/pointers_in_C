/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_pointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/12 10:08:29 by flverge          ###   ########.fr       */
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
	
	int *ptr_a;

	ptr_a = &a;
	

	printf("\nValeur de a  = 			%i  \n", a);
	printf("Adresse de a =			%p  \n\n", &a); 

	// ! STEP 2 : Afficher les pointeurs (adresse + dereference de pointeur)
	 printf("Valeur du pointeur ptr_a  =	%p  \n\n", ptr_a);
	
	 printf("Adresse du pointeur ptr_a =	%p  \n\n", &ptr_a);
	
	 printf("Valeur vers laquelle pointe ptr_a (valeur de a) =  %i  \n\n", *ptr_a);
	
	printf("================\n\n");

	
	printf("Valeur de b  = 			 %i  \n", b);
	printf("Adresse de b = 			 %p \n\n", &b);

	int *ptr_b;

	ptr_b = &b;	
	// ! STEP 3 : Declarer un pointeur sur b (adresse + dereference de pointeur)
	
	 printf("Valeur du pointeur ptr_b  =	 %p  \n\n", ptr_b);
	
	 printf("Adresse du pointeur ptr_b =	 %p  \n\n", &ptr_b);
	
	 printf("Valeur vers laquelle pointe ptr_b (valeur de b) =  %i  \n\n", *ptr_b);
		
	// ! STEP 4 : Changer la valeur du pointeur sur a + le print
	
	
	ptr_a = &b;	
	 printf("================\n");
	 printf("Reassignation du pointeur\n");
	 printf("================\n\n");
	
	 printf("Adresse de a =						%p  \n\n", &a);
	 printf("Adresse de b = 						%p \n\n", &b);
	 printf("Nouvelle valeur du pointeur ptr_a (adresse de b) =	%p  \n\n", ptr_a);
	
	 printf("Adresse du pointeur ptr_a =				%p  \n\n", &ptr_a);
	
	 printf("NOUVELLE valeur vers laquelle pointe ptr_a (valeur de b) =  %i  \n\n", *ptr_a);
	
	
}
