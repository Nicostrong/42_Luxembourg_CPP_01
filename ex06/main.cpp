/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:55:52 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/13 15:49:16 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Usage:\n\t./harlfilter LEVEL_NAME" << std::endl;
		return (1);
	}

	harl.complain(argv[argc - 1]);
	
	return (0);
}
