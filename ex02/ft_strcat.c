/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:52:50 by nicomart          #+#    #+#             */
/*   Updated: 2024/09/01 11:48:34 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;

	dest_len = ft_strlen(dest);
	src_len = 0;
	while (src[src_len] != '\0')
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
/* 
int main()
{
   
	char dest[20] = "Hello";
	char src[] = "World";

	printf("Antes strcat: %s\n", dest);
	ft_strcat(dest, src);
	printf("Depois strcat: %s\n", dest);

	return (0);
} */