/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:39:36 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/22 14:30:02 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	num;

	num = 0;
	while (*str)
	{
		str += 1;
		num += 1;
	}
	return (num);
}
/*int main()
{
    char string[] = "NICOLI";
    
    ft_strlen(string);
    printf("%i", num);
    return (0);
}*/
