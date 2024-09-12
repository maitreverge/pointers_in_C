/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_print_comb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsylvain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:31:43 by dsylvain          #+#    #+#             */
/*   Updated: 2024/09/10 11:34:04 by dsylvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inner_function(int* a, int * b, int* c)
{
		*c = *b + 1;
			while (*c <= '9')
			{
				write(1, a, 1);
				write(1, b, 1);
				write(1, c, 1);
				if (*a != '7' || *b != '8' || *c != '9')
					write(1, ", ", 2);
				(*c)++;
			}
			(*b)++;
}



void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			inner_function(&a, &b, &c);
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}
