/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:50:04 by hshamudh          #+#    #+#             */
/*   Updated: 2025/08/14 18:50:17 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	i = max - min;
	result = malloc(sizeof(int) * i);
	if (!result)
		return (0);
	j = 0;
	while (j < i)
		result[j++] = min++;
	return (result);
}
