/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:42:29 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/30 13:39:28 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(std::string name);
        ~HumanB(void);

        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif