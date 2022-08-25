/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:12:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/25 19:29:07 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_index;
	unsigned int	d_index;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	d_index = ft_strlen(dest);
	s_index = 0;
	while (src[s_index] && (d_index + 1) < size)
	{
		dest[d_index] = src[s_index];
		s_index++;
		d_index++;
	}
	dest[d_index] = '\0';
	return (ft_strlen(dest) + ft_strlen(src + s_index));
}
