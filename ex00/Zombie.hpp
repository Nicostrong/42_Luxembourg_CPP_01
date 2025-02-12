/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:59:07 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/12 16:14:05 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[93m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"

class Zombie
{
	private:

		std::string		_name;

	public:

		Zombie( const std::string& name );
		~Zombie();

		void			announce( void ) const;
};

Zombie*			newZombie( std::string name );
void			randomChump( std::string name );

#endif
