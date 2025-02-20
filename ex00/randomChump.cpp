/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:59:39 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:10:53 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 *	Function to create a new Zombie object and call method announce
 */
void	randomChump( std::string name )
{
	Zombie	new_zombie(name);
	new_zombie.announce();
}
