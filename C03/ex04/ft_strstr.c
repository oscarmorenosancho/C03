/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:45:48 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/23 15:09:51 by omoreno-         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	to_find_len;
	unsigned int	matches_count;

	to_find_len = strlen(to_find);
	i = 0;
	matches_count = 0;
	while (str[i] && matches_count < to_find_len)
	{
		if (str[i]  == to_find[matches_count])
			matches_count++;
		else
			matches_count = 0;
		if (str[i]  == to_find[matches_count])
			matches_count++;
		i++;
	}
	if (matches_count == to_find_len) 
		return (str + i - to_find_len);
	else
		return (0);
}
