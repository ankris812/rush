/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uliherre <uliherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 17:26:51 by uliherre          #+#    #+#             */
/*   Updated: 2022/05/15 21:13:59 by uliherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RETURN 42
#define ARG1 7
#define ARG2 7

void	rush00(int row, int col);
void	rush01(int row, int col);
void	rush02(int row, int col);
void	rush03(int row, int col);
void	rush04(int row, int col);

int	main(void)
{
	rush01(ARG1, ARG2);
	return (RETURN);
}
