/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:46:58 by lasalced          #+#    #+#             */
/*   Updated: 2015/04/01 16:13:24 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	ca;
	int		i;

	i = 0;
	ca = (char)c;
	if (!s || !*s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (ca == s[i])
			return ((char*)&s[i]);
		i++;
	}
	if (ca == s[i])
		return ((char*)&s[i]);
	return (NULL);
}
