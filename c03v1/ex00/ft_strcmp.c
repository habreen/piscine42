/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:10:25 by hshamudh          #+#    #+#             */
/*   Updated: 2025/08/10 19:43:01 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <unistd.h>
#include <stdio.h>

int main (void)
{
	char	str[] = "abc";
	char	bi[] = "bye";

	ft_strcmp(str, bi);
	printf("%d",ft_strcmp(str, bi));
} */
