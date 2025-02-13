/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:48:28 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 14:46:23 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class	Sed
{
	private:

		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
		std::string		_outFilename;

		std::string		replaceSubstring( const std::string& line) const;
		void			readAndReplace( void ) const;

	public:

		Sed( std::string filename, std::string s1, std::string s2 );
		~Sed( void );

		void	replace( void ) const;
};

#endif