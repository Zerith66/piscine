/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:24:55 by hle-hena          #+#    #+#             */
/*   Updated: 2024/07/20 13:58:45 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush02(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (-2);
		}
		nbr *= 10;
		nbr += str[i] - 48;
		i ++;
	}
	if (nbr < 0)
	{
		return (-2);
	}
	return (nbr);
}

int	check_flags(int ac, char **av, int *args)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		i ++;
		if (av[i - 1][0] == '-' && av[i - 1][1] == 'r')
			args[0] = ft_atoi(av[i]);
		else if (av[i - 1][0] == '-' && av[i - 1][1] == 'x')
			args[1] = ft_atoi(av[i]);
		else if (av[i - 1][0] == '-' && av[i - 1][1] == 'y')
			args[2] = ft_atoi(av[i]);
		else if (av[i - 1][0] == '-')
		{
			write(1, "NO '", 4);
			write(1, &av[i - 1][1], 1);
			write(1, "' FLAG EXIST\n", 13);
			return (-1);
		}
		else
			return (write(1, "NO '-' BEFORE FLAG\n", 19), -1);
	}
	return (0);
}

void	init_args(int *args)
{
	args[0] = 2;
	args[1] = 5;
	args[2] = 5;
}

int	main(int ac, char **av)
{
	int	args[3];

	if (ac > 7)
		return (write(1, "TOO MANY ARGUMENTS\n", 19), 1);
	if (ac % 2 == 0)
		return (write(1, "NO ARGUMENT ON A FLAG\n", 22), 1);
	
	init_args(args);
	if (check_flags(ac, av, args) == 0)
	{
		if (args[0] == -2)
			write(1, "ARGUMENT ERROR ON RUSH VERSION\n", 31);
		if (args[1] == -2)
			write(1, "ARGUMENT ERROR ON WIDTH\n", 24);
		if (args[2] == -2)
			write(1, "ARGUMENT ERROR ON HEIGHT\n", 25);
	}
	if (args[0] > 4)
		return (write(1, "RUSH DOES NOT EXIST\n", 20), 1);
	if (args[0] == 0)
		rush00(args[1], args[2]);
	else if (args[0] == 2)
		rush02(args[1], args[2]);
}
