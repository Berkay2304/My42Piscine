/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_str_is_alpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay2304 <berkay2304@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:59:49 by berkay2304        #+#    #+#             */
/*   Updated: 2024/08/27 18:18:12 by berkay2304       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_str_is_alpha(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!((*(str+i)<='z' && *(str+i)>='a') ||  (*(str+i)<='Z' && *(str+i)>='A'))){
            return 0;
        }
        return 1;
        i++;
    }
    return 1;
}