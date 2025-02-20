/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:16:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:15:27 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:

		std::string	_type;

	public:

		/*	Constructor / Destructor	*/
		Weapon( std::string type );
		~Weapon( void );

		/*	Setter	*/
		void				setType( const std::string& type );
		
		/*	Getter	*/
		const std::string&	getType( void ) const;
};

#endif