/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:17:05 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:14:00 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

/*
 *	The weapon is a pointer because it can to be NULL
 */
class	HumanB
{
	private:

		std::string	_name;
		Weapon*		_weapon;

	public:

		/*	Constructor / Destructor	*/
		HumanB( std::string name );
		~HumanB( void );

		/*	Method	*/
		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );
};

#endif