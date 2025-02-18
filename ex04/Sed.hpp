/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:48:28 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/18 08:27:03 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>

class	Sed
{
	private:

		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
		std::string		_outFilename;

		std::string		replaceSubstring( const std::string& line) const;
		int				readAndReplace( void ) const;

	public:

		Sed( std::string filename, std::string s1, std::string s2 );
		~Sed( void );

		void	replace( void ) const;
};

#endif