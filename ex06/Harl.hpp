/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:56:06 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:20:05 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[93m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"

class Harl
{
	private:

		/*	Method Private	*/
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		/*	Constructor / Destructor	*/
		Harl( void );
		~Harl( void );

		/*	Method	*/
		void	complain( std::string level );
};

#endif