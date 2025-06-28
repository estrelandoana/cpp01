/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:39:09 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 00:01:12 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# inclide <string>

class Zombie
{
  public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
  private:
    std::string _name;
}

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
