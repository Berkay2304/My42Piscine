/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay2304 <berkay2304@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:19:13 by berkay2304        #+#    #+#             */
/*   Updated: 2024/08/27 18:24:16 by berkay2304       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if(!(*(str+i)<=126 && *(str+i)>=32)){
            return 0;
        }
        return 1;
        i++;
    }
    return 1;
}