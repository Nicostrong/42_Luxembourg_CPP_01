/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:20:08 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:12:08 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 *	Creat an array of Zombie object of size N with the name "name"
 */
Zombie*	zombieHorde( int N, std::string name)
{
	Zombie*	horde;
	if (N <= 0)
	{
		std::cout	<< "N must be greater than 0 " 
					<< "actual value: N = "
					<< N
					<< std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
