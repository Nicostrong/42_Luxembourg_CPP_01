/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:58:42 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/12 16:16:04 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	My_zombie("Eric");
	Zombie*	My_second_zombie;

	My_second_zombie = newZombie("toto");
	randomChump("Alex");
	My_zombie.announce();
	My_second_zombie->announce();
	randomChump("titi");
	delete My_second_zombie;
	return (0);
}