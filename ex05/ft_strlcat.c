/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:31:24 by nicomart          #+#    #+#             */
/*   Updated: 2024/09/03 18:41:15 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	dest_len = ft_strlen(dest);
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && (dest_len + i) < (size -1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* #include <stdio.h>
int main()
{
	char string[] = "Arroz";
	char string2[] = "Feijao";

	ft_strlcat(string, string2, 20);
	printf("%s\n", string);
} */
