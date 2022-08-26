/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:35:50 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/26 13:49:46 by omoreno-         ###   ########.fr       */
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
		result = s1[i] - s2[i];
		i++;
	}
	if (result == 0)
		result = s1[i] - s2[i];
	return (result);
}
