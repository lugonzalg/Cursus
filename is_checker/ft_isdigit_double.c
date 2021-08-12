/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:16:46 by lugonzal          #+#    #+#             */
/*Updated: 2021/08/12 19:17:04 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit_double(int c)
{
	if (c == '-')
		return (1);
	if ((c < 48 || c > 57) && c != '.')
		return (0);
	return (1);
}