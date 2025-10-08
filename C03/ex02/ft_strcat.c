/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:29:58 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/16 14:55:17 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *dest)
{
	int	i;

	i = 0; 
	while (dest[i])
	{
		i++;
	}
	return (i);
}

void	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	dlen;

	x = 0;
	dlen = ft_strlen(dest);
	while (src[x] != '\0')
	{
		dest[dlen + x] = src[x];
		x++;
	}
	dest[dlen + x] = '\0';
	return (dest);
}
/*int	main()
{	
	char hallo[10] = "Hallo";
	char momon[10] = "Momon";
	ft_strcat(hallo, momon);	
	printf("%s", hallo);
}*/
