/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:25:18 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/29 23:41:42 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*  zombieHorde(int N, std::string name)
{
  int  i;

  if (N < 1)
  {
    std::cout << "Less than 1 zombie it's not a horde, let's infect more people! Muahahahaha" <<std::endl;
    return NULL;
  }
  Zombie* horde = new Zombie[N];
  for (i = 0; i < N; i++)
    horde[i].setName(name);
  return (horde);
}
