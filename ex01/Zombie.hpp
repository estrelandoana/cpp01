/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:03:36 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/28 20:59:25 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie
{
  private:
    std::string _name;
    
  public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;
    void setName(std::string name);
};

Zombie*  zombieHorde(int N, std::string name);

#endif
