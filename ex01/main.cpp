/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:54:18 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/29 23:47:35 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	std::string name;
	int zombieCount;

	if (argc == 3)
	{
		name = argv[1];
		zombieCount = std::atoi(argv[2]);

		std::cout << "Creating " << zombieCount << " zombies named \"" << name << "\"...\n" << std::endl;
	}
	else
	{
		std::cout << "No or incomplete arguments provided." << std::endl;
		std::cout << "To create a custom zombie horde, use: ./zombiehorde <name> <quantity>" << std::endl;
		name = "Unknown Zombie";
		zombieCount = 3;
		std::cout << "Creating default horde of " << zombieCount << " zombies named \"" << name << "\"...\n" << std::endl;
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

	std::cout << "\nThe zombie horde has been eliminated." << std::endl;
	return 0;
}