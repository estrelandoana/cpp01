/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:54:18 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 20:54:18 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int zombieCount;
	std::string name;

	if (argc == 3)
	{
		name = argv[1];
		zombieCount = std::atoi(argv[2]);

		if (zombieCount < 1)
		{
			std::cout << "Please enter a zombie count greater than 0!" << std::endl;
			return 1;
		}

		std::cout << "Creating " << zombieCount << " zombies named \"" << name << "\"...\n" << std::endl;
	}
	else
	{
		name = "Default Zombie";
		zombieCount = 5;
		std::cout << "No arguments provided. Creating default horde of " << zombieCount << " zombies named \"" << name << "\"...\n" << std::endl;
	}

	Zombie* horde = zombieHorde(zombieCount, name);
	if (!horde)
	{
		std::cout << "Failed to create zombie horde." << std::endl;
		return 1;
	}

	for (int i = 0; i < zombieCount; ++i)
		horde[i].announce();

	delete[] horde;

	std::cout << "\nThe zombie horde has been eliminated.\n" << std::endl;
	return EXIT_SUCCESS;
}
