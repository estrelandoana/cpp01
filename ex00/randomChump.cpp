/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:47:47 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 19:22:53 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

void    randomChump(std::string name)
{
  Zombie stack_zombie(name);
  stack_zombie.announce();
}
