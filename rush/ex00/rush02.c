/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:39:39 by uliherre          #+#    #+#             */
/*   Updated: 2022/05/15 21:11:27 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ZERO 0
#define INIT -1
#define MIDLE ' '

#define WALLH 'B'
#define WALLV 'B'
#define TLC 'A'
#define TRC 'A'
#define DLC 'C'
#define DRC 'C'

void	ft_putchar(char c);

static void	ft_traslate(int row, int col, int r_max, int c_max)
{
	if (!row && !col)
		ft_putchar(TLC);
	else if (!row && col == c_max)
		ft_putchar(TRC);
	else if (!col && row == r_max)
		ft_putchar(DLC);
	else if (row == r_max && col == c_max)
		ft_putchar(DRC);
	else if (!row || row == r_max)
		ft_putchar(WALLH);
	else if (!col || col == c_max)
		ft_putchar(WALLV);
	else
		ft_putchar(MIDLE);
}

void	rush02(int row, int col)
{
	int	r;
	int	c;

	r = INIT;
	if (ZERO < row && ZERO < col)
	{
		while (++r < row)
		{
			c = INIT;
			while (++c < col)
				ft_traslate(r, c, row INIT, col INIT);
			ft_putchar('\n');
		}
	}
}
