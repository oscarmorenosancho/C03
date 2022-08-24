/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:35:50 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 16:01:56 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	while (s1[i] && s2[i] && result == 0)
	{
		if (s1[i] > s2[i])
			result = 1;
		else if (s1[i] < s2[i])
			result = -1;
		i++;
	}
	if (result == 0)
	{
		if (s1[i] != 0 && s2[i] == 0)
			result = 1;
		else if (s1[i] == 0 && s2[i] != 0)
			result = -1;
	}
	return (result);
}
