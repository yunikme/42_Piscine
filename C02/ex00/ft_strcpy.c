/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:53:16 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/10 16:12:18 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ori_dest;

	ori_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ori_dest);
}

/*#include <stdio.h>
int	main()
{
	char new_string[] = "Hello World!";
	char dest_string[25];
	ft_strcpy(dest_string, new_string);
	printf("Copied string: %s\n", dest_string);
}*/
