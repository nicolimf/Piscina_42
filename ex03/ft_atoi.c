/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:45:43 by nicomart          #+#    #+#             */
/*   Updated: 2024/09/04 16:25:45 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	negative;

	i = 0;
	j = 0;
	negative = 1;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (j * negative);
}
/*#include <stdio.h>
 int     main(void)
 {
		 char    *test1 = "   42";
		 char    *test2 = "   -42";
		 char    *test3 = "4193 with words";
		 char    *test4 = "words and 987";
		 char    *test5 = "+123";
		 char    *test6 = "-0";
		 char    *test7 = "  +0042";
		 char    *test8 = "-2147483648";
 
		 printf("ft_atoi(\"%s\") = %d\n", test1, ft_atoi(test1));
		 printf("ft_atoi(\"%s\") = %d\n", test2, ft_atoi(test2));
		 printf("ft_atoi(\"%s\") = %d\n", test3, ft_atoi(test3));
		 printf("ft_atoi(\"%s\") = %d\n", test4, ft_atoi(test4));
		 printf("ft_atoi(\"%s\") = %d\n", test5, ft_atoi(test5));
		 printf("ft_atoi(\"%s\") = %d\n", test6, ft_atoi(test6));
		 printf("ft_atoi(\"%s\") = %d\n", test7, ft_atoi(test7));
		 printf("ft_atoi(\"%s\") = %d\n", test8, ft_atoi(test8));
 
		 return (0);
 }*/