/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:03:55 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/22 14:18:45 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	value;

	value = *a;
	*a = *b;
	*b = value;
}
/*int	main(void)
{
	int value_a;
	int value_b;
	
	value_a = 42;
	value_b = 24;
	
	ft_swap(&value_a, &value_b);
	printf("Novo valor da variavel value_a: %d\n", value_a);
	printf("Novo valor da variavel value_b: %d\n", value_b);

	return(0);
}*/
