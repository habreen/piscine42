/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshamudh <hshamudh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:10:25 by hshamudh          #+#    #+#             */
/*   Updated: 2025/08/10 15:19:25 by hshamudh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		new_word;

	ptr = str;
	new_word = 1;
	while (*ptr)
	{
		if (new_word)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr = *ptr - 32;
		}
		else
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr = *ptr + 32;
		}
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')
			|| (*ptr >= '0' && *ptr <= '9'))
			new_word = 0;
		else
			new_word = 1;
		ptr++;
	}
	return (str);
}

/* int main(void)
{
    char test1[] = "hello, world! 42test";
    char test2[] = "a TEST, bETter. c++ 123go";

    printf("Before: \"%s\"\n", test1);
    printf("After : \"%s\"\n\n", ft_strcapitalize(test1));

    printf("Before: \"%s\"\n", test2);
    printf("After : \"%s\"\n", ft_strcapitalize(test2));

    return 0;
}
 */