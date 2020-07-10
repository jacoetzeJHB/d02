/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:07:03 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/10 12:45:09 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet_reverse(void) {
	char	start;
	char	end;

	start = 'z';
	end = 'a';
	while (start >= end) {
		ft_putchar (start);
		start -- ;
	}
}
