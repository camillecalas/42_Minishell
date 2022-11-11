/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <ccalas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:11:05 by ccalas            #+#    #+#             */
/*   Updated: 2022/04/27 11:55:01 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	void	*pointer;

	pointer = (void *)malloc(element_count * element_size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, (element_count * element_size));
	return (pointer);
}
