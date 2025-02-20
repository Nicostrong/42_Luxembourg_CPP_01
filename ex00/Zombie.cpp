/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:58:56 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:09:38 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*******************************************************************************
 *						CONSTRUCTOR / DESTRUCTOR							   *
 ******************************************************************************/

/*
 *	Constructor with parameter
 */
Zombie::Zombie( const std::string& name ) : _name( name )
{
	std::cout	<< GREEN
				<< "Zombie "
				<< this->_name
				<< " is born 🤤🤤🤤🤤🤤"
				<< RESET
				<< std::endl;
}

/*
 *	Destructor
 */
Zombie::~Zombie( void )
{
	std::cout	<< RED
				<< "Zombie "
				<< this->_name
				<< " is dead 🤯🤯🤯🤯🤯"
				<< std::endl;
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Announce method to say something
 */
void	Zombie::announce( void ) const
{
	std::cout	<< YELLOW
				<< this->_name
				<< ": BraiiiiiiinnnzzzZ... 🧠🧠🧠🧠"
				<< RESET
				<< std::endl;
}