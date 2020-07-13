/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:20:59 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/13 15:05:19 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printout(char a, char b, char c, char d) 
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}
void	ft_print_comb2(void) 
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
					{
						ft_printout(a,b,c,d);
						d++;
					}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
			a++;
	}
}
