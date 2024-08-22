/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <nicomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:36:14 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/22 14:18:53 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{   
    int a;
    int b;
    int div;
    int mod;

    a = 56;
    b = 8;

    ft_div_mod(a, b, &div, &mod);

    printf("Resultado da Divisao: %d\n", div);
    printf("Resto da divisao: %d\n", mod);

    return (0);   
}*/
