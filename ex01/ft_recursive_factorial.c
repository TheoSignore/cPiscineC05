/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:46:03 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/14 21:39:34 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int sign;

	nb = nb == 0 ? 1 : nb;
	nb = nb < 0 ? 0 : nb;
	if (nb - 1 > 0)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
