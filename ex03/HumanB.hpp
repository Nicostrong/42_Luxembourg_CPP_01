/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:17:05 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 11:09:35 by nfordoxc         ###   Luxembourg.lu     */
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

		HumanB( std::string name );
		~HumanB( void );

		void	attack( void ) const;
		void	setWeapon( Weapon& weapon );
};

#endif