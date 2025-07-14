/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perattan <perattan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:14:39 by perattan          #+#    #+#             */
/*   Updated: 2025/07/14 20:30:05 by perattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;
	int	f;

	f = (int) n;
	i = 0;
	j = 0;
	while (i < f && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < f)
	{
		dest[i] = '\0';
		j++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "Helloooooooooo";
	char dest[] = "hi";

	ft_strncpy(dest, src, 5);
	printf("%s", dest);
}
