/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:10:25 by hshamudh          #+#    #+#             */
/*   Updated: 2025/08/03 18:50:13 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*pointer;

	pointer = str;
	while (*pointer)
	{
		if (*pointer >= 'a' && *pointer <= 'z')
			*pointer = *pointer - 32;
		pointer++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	printf(ft_strupcase(argv[1]));
}
*/