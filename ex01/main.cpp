/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:58:42 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/12 16:52:27 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	my_zombie("Eric");
	Zombie*	my_horde;
	Zombie*	my_horde2;
	int		n;

	n = 5;
	my_horde = zombieHorde(n, "Athill");
	if (my_horde)
	{
		for (int i = 0; i < n; i++)
			my_horde[i].announce();
		delete[] my_horde;	
	}
	my_horde2 = zombieHorde(-5, "Athill");
	if (my_horde2)
	{
		for (int i = 0; i < n; i++)
			my_horde2[i].announce();
		delete[] my_horde2;	
	}
	my_zombie.announce();
	return (0);
}
