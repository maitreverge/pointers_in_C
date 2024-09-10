/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_scope.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/10 10:35:09 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

// changer le prototype de la fonction du 'a' et du 'b'
void test(int a, int b)
{
	printf("Valeur de a de la fonction TEST = \033[1;31m %i \033[0m \n", a);
	printf("Adresse de a du TEST = \033[1;31m %p\033[0m \n\n", &a);
	
	printf("Valeur de b de la fonction TEST = \033[1;32m %i \033[0m \n", b);
	printf("Adresse de b du TEST = \033[1;32m %p\033[0m \n\n", &b);
}

int main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;

	// Les caracteres de type `\033[1;31m` sont des caracteres ANSI pour le formatage et la couleur dans le terminal.
	printf("\nValeur de a de la fonction MAIN = \033[1;31m %i \033[0m \n", a);
	
	printf("Adresse de a du MAIN = \033[1;31m %p\033[0m \n\n", &a);
	
	
	printf("Valeur de b de la fonction MAIN = \033[1;32m %i \033[0m \n", b);
	
	printf("Adresse de b du MAIN = \033[1;32m %p\033[0m \n\n", &b);

	printf("================\n\n");
	
	test(a, b);

}