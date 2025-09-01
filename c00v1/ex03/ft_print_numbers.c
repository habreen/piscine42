/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:38:41 by hshamudh          #+#    #+#             */
/*   Updated: 2025/07/27 14:49:16 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}
