/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:37:21 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/22 14:34:59 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{   
    int a;
    int b;
    
    a = 56;
    b = 8;

    ft_ultimate_div_mod(&a, &b);

    printf("Resultado da Divisao: %d\n", a);
    printf("Resto da divisao: %d\n", b);

    return (0);   
}*/
