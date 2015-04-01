/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:40:25 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/06 13:46:22 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*a;
	size_t	i;

	a = s;
	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			a[i] = '\0';
			i++;
		}
	}
}