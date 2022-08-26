/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:57:29 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/26 13:54:43 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	i;

	result = 0;
	i = 0;
	while (s1[i] && s2[i] && result == 0 && i < n)
	{
		result = (s1[i] - s2[i]);
		i++;
	}
	if (result == 0 && i < n)
		result = (s1[i] - s2[i]);
	return (result);
}
