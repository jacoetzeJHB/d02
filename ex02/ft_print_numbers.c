/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:07:41 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/10 13:25:04 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void) {
	char	start;
	char	end;

	start = '0';
	end = '9';
	while (start <= end) {
	ft_putchar(start);
	start++;
	}
}
