/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:10:25 by hshamudh          #+#    #+#             */
/*   Updated: 2025/08/02 22:04:19 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char *str = "-9";
	printf("%i\n", ft_str_is_printable(str));
} */