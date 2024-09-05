/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:46:46 by nicomart          #+#    #+#             */
/*   Updated: 2024/08/15 18:31:13 by nicomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	negative;

	if (n < 0)
	{
		negative = 'N';
	}
	else
	{
		negative = 'P';
	}
	write(1, &negative, 1);
}
