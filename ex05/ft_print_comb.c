/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:39:01 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/19 11:42:47 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	chec(int count_hundred, int count_dezena, int count_unidade)
{
	int	current;
	int	oposity;
	int	theird;

	current = 100 * count_hundred + count_dezena * 10 + count_unidade;
	oposity = 100 * count_unidade + count_dezena * 10 + count_hundred;
	theird = 100 * count_unidade + count_dezena * 10 + count_hundred;
	return (current < oposity && current < theird);
}

void	ft_print_comb(void)
{
	int	count_hundred;
	int	count_dezena;
	int	count_unidade;
	int	print;
	char	c1;
	char	c2;
	char	c3;

	count_hundred = 0;
	while (count_hundred < 10)
	{
		count_dezena = 0;
		while (count_dezena < 10)
		{
			count_unidade = 0;
			while (count_unidade < 10)
			{
				print = chec(count_hundred, count_dezena, count_unidade);
				if (print)
				{
					c1 = count_hundred + '0';
					c2 = count_dezena + '0';
					c3 = count_unidade + '0';
					write(1, &c1, 1);
					write(1, &c2, 1);
					write(1, &c3, 1);
					write(1, ", ", 2);
				}
				count_unidade += 1;
			}
		count_dezena += 1;
		}
	count_hundred += 1;		
	}
}

int	main(void)
{
	ft_print_comb();
}
