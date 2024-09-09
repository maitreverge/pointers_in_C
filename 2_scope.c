/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_scope.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:20:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/09 21:16:05 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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

	printf("\nValeur de a de la fonction MAIN = \033[1;31m %i \033[0m \n", a);
	printf("Adresse de a du MAIN = \033[1;31m %p\033[0m \n\n", &a);
	
	printf("Valeur de b de la fonction MAIN = \033[1;32m %i \033[0m \n", b);
	printf("Adresse de b du MAIN = \033[1;32m %p\033[0m \n\n", &b);

	printf("================\n\n");
	
	test(a, b);

	// printf("================\n\n");
	
}