/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:38:19 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/15 08:31:18 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int term;

	term = 1;
	if (index > 2)
		term = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	term = index == 0 ? 0 : term;
	term = index < 0 ? -1 : term;
	return (term);
}
