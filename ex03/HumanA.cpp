/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:16:53 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:13:02 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*******************************************************************************
 *						CONSTRUCTOR / DESTRUCTOR							   *
 ******************************************************************************/

/*
 *	Constructor of the class HumanA
 */
HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
	return ;
}

/*
 *	Destructor of the class HumanA
 */
HumanA::~HumanA( void )
{
	return ;
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Methode attack print the name of HumanA and attack with her own wearpon
 */
void	HumanA::attack( void ) const
{
	std::cout	<< this->_name \
				<< " attacks with his " \
				<< this->_weapon.getType() \
				<< std::endl;
	return ;
}

