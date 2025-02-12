/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:58:56 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/12 16:50:26 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 *	Default constructor
 */
Zombie::Zombie( void ) : _name( "" )
{
	return ;
}

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
	return ;
}

/*
 *	Default destructor
 */
Zombie::~Zombie( void )
{
	std::cout	<< RED
				<< "Zombie "
				<< this->_name
				<< " is dead 🤯🤯🤯🤯🤯"
				<< std::endl;
	return ;
}

/*
 *	annoncement of a zombie
 */
void	Zombie::announce( void ) const
{
	std::cout	<< YELLOW
				<< this->_name
				<< ": BraiiiiiiinnnzzzZ... 🧠🧠🧠🧠"
				<< RESET
				<< std::endl;
	return ;
}

/*
 *	Before calling default constructor, it set the attribut _name with the 
 *	corecte name passed in parameter
 */
void	Zombie::setName( const std::string name )
{
	this->_name = name;
	return ;
}
