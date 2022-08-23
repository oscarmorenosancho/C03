/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:12:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 15:17:43 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] || len_dest < size)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = 0;
	return (len_dest);
}
