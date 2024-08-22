/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:38:10 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/22 14:24:59 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count += 1;
	}
}
/*int	main()
{
    char string[20];

    string[0] = 'N';
    string[1] = 'i';
    string[2] = 'c';
    string[3] = 'o';
    string[4] = 'l';
    string[5] = 'i';
    string[6] = '\0';

    ft_putstr(string);
}*/
