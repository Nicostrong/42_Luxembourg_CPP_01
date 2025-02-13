/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:58:19 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 10:13:21 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string		stringVAR;
	std::string*	stringPTR;
	std::string&	stringREF = stringVAR;

	stringVAR = "HI THIS IS BRAIN";
	stringPTR = &stringVAR;

	std::cout << "Memory address" << std::endl;
	std::cout << "\tstringVAR address: " << &stringVAR << std::endl;
	std::cout << "\tstringPTR address: " << stringPTR << std::endl;
	std::cout << "\tstringREF address: " << &stringREF << std::endl;

	std::cout << "Value of all variables" << std::endl;
	std::cout << "\tstringVAR: " << stringVAR << std::endl;
	std::cout << "\tstringPTR: " << *stringPTR << std::endl;
	std::cout << "\tstringREF: " << stringREF << std::endl;

	stringVAR = "I want BRAIN";

	std::cout << "Value of all new variables" << std::endl;
	std::cout << "\tstringVAR: " << stringVAR << std::endl;
	std::cout << "\tstringPTR: " << *stringPTR << std::endl;
	std::cout << "\tstringREF: " << stringREF << std::endl;

	std::cout << "Memory address of new variables" << std::endl;
	std::cout << "\tstringVAR address: " << &stringVAR << std::endl;
	std::cout << "\tstringPTR address: " << stringPTR << std::endl;
	std::cout << "\tstringREF address: " << &stringREF << std::endl;

	return (0);
}