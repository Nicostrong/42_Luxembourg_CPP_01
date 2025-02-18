/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:48:37 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/18 08:28:34 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/*
 *	Constructor of Sed object
 */
Sed::Sed(	std::string filename, \
			std::string s1, \
			std::string s2 ) : \
				_filename(filename), \
				_s1(s1), \
				_s2(s2), \
				_outFilename(_filename + ".replace")
{
	return ;
}

/*
 *	Destructor of Sed object
 */
Sed::~Sed( void )
{
	return ;
}

/*
 *	replaceSubstring create a new string with the substitution of the word to 
 *	replace. It start at the bigining of the string and search for the first
 *	ocurence of the word to replace. It append the string before the word to
 *	replace, the word to replace and the string after the word to replace. It
 *	restart the search after the word to replace.
 */
std::string	Sed::replaceSubstring( const std::string& line ) const
{
	std::string		result;
	size_t			start;
	size_t			pos;

	start = 0;
	pos = line.find(_s1, start);

	while (pos != std::string::npos)
	{
		result.append(line.substr(start, pos - start));
		result.append(_s2);
		start = pos + _s1.length();
		pos = line.find(_s1, start);
	}
	result.append(line.substr(start));

	return (result);
}

/*
 *	readAndReplace open the file _filename and read it line by line. It replace
 *	the word to replace by the new word and write the new line in the file
 *	_outFilename.
 */
int	Sed::readAndReplace( void ) const
{
	std::ifstream	inFile(_filename.c_str());
	std::ofstream	outFile(_outFilename.c_str());
	std::string		line;

	if (!inFile.is_open())
	{
		std::cerr << "Error: could not open file " << _filename << std::endl;
		return (1);
	}

	if (!outFile.is_open())
	{
		std::cerr << "Error: could not open file " << _outFilename << std::endl;
		return (1);
	}

	while (std::getline(inFile, line))
		outFile << replaceSubstring(line) << std::endl;

	outFile.close();
	inFile.close();

	return (0);
}

/*
 *	Call the methode for substitute all ocurence of s1 by s2 on _filename
 */
void	Sed::replace( void ) const
{
	if (!readAndReplace())
	{
		std::cout << "File processed successfully." << std::endl;
		std::cout << "Output file: " << this->_outFilename << std::endl;
	}
	return ;
}
