/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay2304 <berkay2304@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:17:05 by berkay2304        #+#    #+#             */
/*   Updated: 2024/08/27 18:17:46 by berkay2304       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!(*(str+i)<='Z' && *(str+i)>='A')){
            return 0;
        }
        return 1;
        i++;
    }
    return 1;
}