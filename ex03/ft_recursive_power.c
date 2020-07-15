/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:21:51 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/15 08:24:53 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	nb = power > 1 ? nb * ft_recursive_power(nb, power - 1) : nb;
	nb = power < 0 ? 0 : nb;
	nb = power == 0 ? 1 : nb;
	return (nb);
}
