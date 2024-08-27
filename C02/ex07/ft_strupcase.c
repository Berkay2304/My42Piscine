/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berkay2304 <berkay2304@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:24:39 by berkay2304        #+#    #+#             */
/*   Updated: 2024/08/27 18:27:35 by berkay2304       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str){
    int i;
    i = 0;
    
    while (*(str+i)!= '\0')
    {
        if((*(str+i)<='z' && *(str+i)>='a')){
            *(str+i)-=32;
        }
        i++;
    }
    return str;
}