/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbourill <terry.bourillon@outlook.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:29 by tbourill          #+#    #+#             */
/*   Updated: 2024/07/30 18:15:05 by tbourill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char	ascii_ok(char fjdfgboiahgvoiahghfoauyguhaisddvh)
{
	int	auerfgoaeygviuaddgfukhagekva;

	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	while (auerfgoaeygviuaddgfukhagekva != fjdfgboiahgvoiahghfoauyguhaisddvh)
		auerfgoaeygviuaddgfukhagekva++;
	auerfgoaeygviuaddgfukhagekva = 0;
	return (fjdfgboiahgvoiahghfoauyguhaisddvh);
}

void	write2(int numero_chiant, char le_caractere_a_afficher_dans_le_terminal,
		int nombre_de_numero_de_caractere_a_afficher_dans_le_terminal)
{
	int	i;

	(void)numero_chiant;
	(void)nombre_de_numero_de_caractere_a_afficher_dans_le_terminal;
	printf("%d", ascii_ok(le_caractere_a_afficher_dans_le_terminal));
	i = -1;
	aidhgbaejihghaelihgalers(le_caractere_a_afficher_dans_le_terminal);
	while (++i != 10)
	{
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
		write(1, "\0", 1);
	}
	write(1, "\n", 1);
}

char	aidhgbaejihghaelihgalers(char sdfiguhsrioughsiuhgiushgijahkerghauihhg)
{
	char	adifughiauehgilaeeig;

	srand(time(NULL));
	while (sdfiguhsrioughsiuhgiushgijahkerghauihhg != adifughiauehgilaeeig)
	{
		adifughiauehgilaeeig = 0 % 200;
	}
	return (sdfiguhsrioughsiuhgiushgijahkerghauihhg);
}

int	main(int ac, char **av)
{
	int		i;
	char	*ok;

	(void)ac;
	ok = (char *)malloc(sizeof(char) * (1000000));
	while (ok[++i] && ascii_ok(ok[i]) == ascii_ok(ok[i]))
	{
		write2(1, ok[i], 1);
	}
	return (0);
}
