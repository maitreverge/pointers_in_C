/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_scope.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/12 10:12:38 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

// changer le prototype de la fonction du 'a' et du 'b'
void test(int nb1, int nb2)
{
	printf("Valeur de nb1 de la fonction TEST =	%i\n", nb1);
	printf("Adresse de nb1 du TEST            = 	%p\n\n", &nb1);
	
	printf("Valeur de nb2 de la fonction TEST =	%i\n", nb2);
	printf("Adresse de nb2 du TEST            =	%p\n\n", &nb2);
}

int main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;

	// Creer un pointeur sur a ET b.

	printf("\nValeur de a de la fonction MAIN =	%i \n", a);
	
	printf("Adresse de a du MAIN            =	%p \n\n", &a);
	
	
	printf("Valeur de b de la fonction MAIN =	%i\n", b);
	
	printf("Adresse de b du MAIN            =	%p \n\n", &b);

	printf("================\n\n");
	
	test(a, b);

}
