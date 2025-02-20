/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:56:14 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:19:01 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*******************************************************************************
 *						CONSTRUCTOR / DESTRUCTOR							   *
 ******************************************************************************/

/*
 *	Constructor of class Harl
 */
Harl::Harl( void )
{
	return ;
}

/*
 *	Destructor of class Harl
 */
Harl::~Harl( void )
{
	return ;
}

/*******************************************************************************
 *							METHOD PRIVATE 									   *
 ******************************************************************************/

/*
 *	Debug methode with personal message
 */
void	Harl::debug( void )
{
	std::cout	<< GREEN
				<< "[DEBUG]\n\t"
				<< "I love having extra bacon for my 7XL-double-cheese-triple-"
				<< "pickle-specialketchupburger. I really do!"
				<< RESET
				<< std::endl;
}

/*
 *	Info methode with personal message
 */
void	Harl::info( void )
{
	std::cout	<< BLUE
				<< "[INFO]\n\t"
				<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! If you did, "
				<< "I wouldn’t be asking for more!"
				<< RESET
				<< std::endl;
}

/*
 *	Warning methode with peronal message
 */
void	Harl::warning( void )
{
	std::cout	<< YELLOW
				<< "[WARNING]\n\t"
				<< "I think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month."
				<< RESET
				<< std::endl;
}

/*
 *	Error methode with personal mesage
 */
void	Harl::error( void )
{
	std::cout	<< RED
				<< "[ERROR]\n\t"
				<< "This is unacceptable! I want to speak to the manager now."
				<< RESET
				<< std::endl;
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Complain methode using an array of pointers to class functions.
 *	We define an array of value of level.
 *	We define an array of pointer to methode function.
 *	For each level, we call the function associated.
 *	If bad level we print an error message.
 */
void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*actions[4])(void) = {	&Harl::debug, \
											&Harl::info, \
											&Harl::warning, \
											&Harl::error
										};

	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])();
			return;
		}
	}

	std::cerr	<< RED
				<< "[UNKNOWN] Invalid complaint level."
				<< RESET
				<< std::endl;

	return ;
}
