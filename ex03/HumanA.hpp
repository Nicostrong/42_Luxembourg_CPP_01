/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:16:43 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 11:09:35 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

/*
 *	The weapon is a reference because it can't to be NULL
 */
class	HumanA
{
	private:

		std::string	_name;
		Weapon&		_weapon;

	public:

		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		void	attack( void ) const;
};

#endif