/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomayamamoto <naomayamamoto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:06:40 by naomayamamo       #+#    #+#             */
/*   Updated: 2024/09/06 17:30:33 by naomayamamo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include libft.h

size_t ft_strlen (const char *str){
    int i;
    i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

