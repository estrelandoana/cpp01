/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 00:05:39 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 00:49:32 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
