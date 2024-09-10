/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomayamamoto <naomayamamoto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:08:22 by naomayamamo       #+#    #+#             */
/*   Updated: 2024/09/11 08:12:21 by naomayamamo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *buf, size_t len){
    char *str;
    size_t i;
    
    str = (char *)buf;
    i = 0;
    while(i < len){
        str[i] = '0';
        i++;
    }
    return (buf)
}