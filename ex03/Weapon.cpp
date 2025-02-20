/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:16:30 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:14:54 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*******************************************************************************
 *						CONSTRUCTOR / DESTRUCTOR							   *
 ******************************************************************************/

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

/*******************************************************************************
 *								SETTER										   *
 ******************************************************************************/

/*
 *	Setter of attribute _type
 */
void				Weapon::setType( const std::string& type )
{
	this->_type = type;
	return ;
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Getter function to attribute _type
 */
const std::string	&Weapon::getType( void ) const
{
	return (this->_type);
}
