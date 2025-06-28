/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:23:31 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 19:36:47 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int  main()
{
  Zombie* heapZombie = newZombie("Heap Zombie");
  heapZombie->announce();

  randomChump("Stack Zombie");

  delete heapZombie;

  return 0;
}
