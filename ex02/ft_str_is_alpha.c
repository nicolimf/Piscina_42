/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:56:05 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/28 19:40:16 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	char string[] = "544448$##@!";
	
	printf("Teste: %s\n", string);
	printf("Return value: %d\n", ft_str_is_alpha(string));
}*/
