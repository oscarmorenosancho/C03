/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:26:47 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 11:37:49 by omoreno-         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = 0;
	return (dest);
}
