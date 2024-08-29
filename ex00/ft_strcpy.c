/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:32:09 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/28 16:53:21 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count += 1;
	}
	dest[count] = '\0';
	return (dest);
}
/*int main()
{
	char string[] = "Martins";
	char string2[] = "Nicoli";

	printf("%s", ft_strcpy(string2, string));
}*/