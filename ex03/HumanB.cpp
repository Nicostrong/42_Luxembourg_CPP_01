/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:17:13 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 13:46:13 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
 *	Constructor of the class HumanA _weapon is NULL
 */
HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	return ;
}

/*
 *	Destructor of the class HumanA
 */
HumanB::~HumanB( void )
{
	return ;
}

/*
 *	Methode attack print the name of HumanA and attack with her own weapon
 */
void	HumanB::attack( void ) const
{
	if (this->_weapon)
	{
		std::cout	<< this->_name \
					<< " attacks with his " \
					<< this->_weapon->getType() \
					<< std::endl;
	}
	else
	{
		std::cout	<< this->_name \
					<< " has no weapon" \
					<< std::endl;
	}
	return ;
}

/*
 *	Methode setWeapon to give a wearpon to HumanB
 */
void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
	return ;
}
