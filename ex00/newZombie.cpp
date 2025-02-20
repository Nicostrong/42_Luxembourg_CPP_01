/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:59:25 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:10:13 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 *	Function to create a new Zombie object
 */
Zombie*	newZombie( std::string name )
{
	return (new Zombie(name));
}
