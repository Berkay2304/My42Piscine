/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay2304 <berkay2304@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:19:40 by berkay2304        #+#    #+#             */
/*   Updated: 2024/09/04 22:25:16 by berkay2304       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
