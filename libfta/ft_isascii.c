/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomayamamoto <naomayamamoto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:03:16 by naomayamamo       #+#    #+#             */
/*   Updated: 2024/09/06 16:03:48 by naomayamamo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ascii(int c){
    if(c >= 0 && c <= 127){
        return 1;
    }
    return 0;
}