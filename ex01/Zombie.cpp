/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:25:18 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/29 23:40:23 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : _name(name)
{
  std::cout << _name << " was bitten and turned into a zombie!" << std::endl;
}

Zombie::~Zombie(void)
{
  std::cout << _name << " was shot in the head! R.I.P" << std::endl;
}

void Zombie::announce(void) const
{
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
  _name = name;
  if (name == "Unknown Zombie")
		std::cout << "An unknown zombie was created..." << std::endl;
  else
		std::cout << _name << " was bitten and turned into a zombie!" << std::endl;
}
