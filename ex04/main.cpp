/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:48:21 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/18 08:27:55 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage:\n\t./replace filename s1 s2" << std::endl;
		return (1);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	sed.replace();
	return (0);
}
