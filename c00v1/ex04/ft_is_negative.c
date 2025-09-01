/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:17:18 by hshamudh          #+#    #+#             */
/*   Updated: 2025/07/27 16:40:13 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
		write (1, "N", 1);
	else
		write(1, "P", 1);
}

/*int main (void)
{
	ft_is_negative(-10);
	ft_is_negative(0);
}*/
