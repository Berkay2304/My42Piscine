/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanseve <bcanseve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:53:13 by bcanseve          #+#    #+#             */
/*   Updated: 2024/09/02 14:59:33 by bcanseve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	while (i < ft_strlen(str))
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
