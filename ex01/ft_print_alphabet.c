/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:40:34 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/16 14:57:02 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}
/*void ft_print_alphabet(void);

int main(void){ 
ft_print_alphabet();

return 0;
}*/
