/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:06:36 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/10 12:06:44 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void) {
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (start <= end) {
		ft_putchar (start);
		start ++;
	}
} 
