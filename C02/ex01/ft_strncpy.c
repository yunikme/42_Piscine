/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymediaya <ymediaya@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:49:55 by ymediaya          #+#    #+#             */
/*   Updated: 2025/09/15 13:41:06 by ymediaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main()
{
	char source1[] = "Hunyri";
	char desti[] = "Need Rice";
	int n = 5;
	printf("destination before: %s\n", desti);
	ft_strncpy(desti, source1, n);
	printf("destination after: %s\n", desti);

	return 0;
}*/
