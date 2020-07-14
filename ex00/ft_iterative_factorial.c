/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:30:21 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/14 21:39:40 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int sign;

	nb = nb == 0 ? 1 : nb;
	sign = nb < 0 ? -1 : 1;
	nb = nb < 0 ? -nb : nb;
	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb * sign);
}
