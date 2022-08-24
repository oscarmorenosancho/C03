/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:12:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 20:46:23 by omoreno-         ###   ########.fr       */
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

void *ft_memcpy(void *str1, const void *str2, unsigned int n)
{
	unsigned int	i;
	char			*p1;
	char			*p2;

	p1 = (char *)str1;
	p2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (str1);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int s_length;
	unsigned int remaining_size;
	unsigned int d_length; 
	unsigned int copy_length;

	s_length = ft_strlen(src);
	remaining_size = size;
	while (*dest && remaining_size > 0)
	{
    	dest++;
		remaining_size--;
	}
	d_length = size - remaining_size;
	if (d_length < remaining_size)
	{
		copy_length = remaining_size - 1;
		if (s_length < copy_length)
			copy_length = s_length;
		ft_memcpy(dest, src, copy_length);
		dest[copy_length] = '\0';
	}
	return d_length + s_length;
}
