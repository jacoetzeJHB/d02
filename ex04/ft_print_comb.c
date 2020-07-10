/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:37:56 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/10 15:41:07 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_chars(char a, char b, char c) {
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	if (a != '0' || b != '1' || c != '2') {
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void) {
	char a = '0', b = '1', c = '2';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
					ft_print_chars(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;	
	}
}
