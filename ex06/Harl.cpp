/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:56:14 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 16:08:36 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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

/*
 *	Complain methode using an array of pointers to class functions.
 *	We define an array of value of level.
 *	We define an array of pointer to methode function.
 *	We schearch the index of level we need to start to show.
 *	We use the switch case boucle for print all message starting at the index
 *	If level not in Harl, it's the default case we print.
 */
void	Harl::complain( std::string level )
{
	int			index;
	int			i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*actions[4])(void) = {	&Harl::debug, \
											&Harl::info, \
											&Harl::warning, \
											&Harl::error
										};


	index = -1;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
		case 0:
			(this->*actions[0])();
		case 1:
			(this->*actions[1])();
		case 2:
			(this->*actions[2])();
		case 3:
			(this->*actions[3])();
			return ;
		default:
			std::cerr	<< RED
						<< "[ Probably complaining about insignificant problems ]"
						<< RESET
						<< std::endl;
	}

	return ;
}
