/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomayamamoto <naomayamamoto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 07:47:32 by naomayamamo       #+#    #+#             */
/*   Updated: 2024/09/11 14:15:04 by naomayamamo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *buf, int c, size_t len){
    char *str;
    size_t i;

    str = (char *)buf;
    i = 0;
    while(i<len){
        str[i] = (unsigned char)c; //int型を1バイトのunsigned char にキャスト。1~256の非負の値
        i++;
    }
    return (buf);
}