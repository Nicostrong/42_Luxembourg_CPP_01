/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:16:30 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 11:05:07 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
 *	Constructor of the class Weapon
 */
Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}

/*
 *	Destructor of the class Weapon
 */
Weapon::~Weapon( void )
{
	return ;
}

/*
 *	Getter function to attribute _type
 */
const std::string&	Weapon::getType( void ) const
{
	return (this->_type);
}

/*
 *	Setter of attribute _type
 */
void	Weapon::setType( const std::string& type )
{
	this->_type = type;
	return ;
}
