/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:07:42 by apaula-l          #+#    #+#             */
/*   Updated: 2025/06/30 00:41:18 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Memory addresses" << std::endl;
    std::cout << "Brain's address: " << &brain << std::endl;
    std::cout << "stringPTR's address: " << stringPTR << std::endl;
    std::cout << "stringREF's address: " << &stringREF << std::endl;

    std::cout << "\nValue" << std::endl;
    std::cout << "Brain's value: " << brain << std::endl;
    std::cout << "stringPTR's value: " << *stringPTR << std::endl;
    std::cout << "stringREF's value: " << stringREF <<std::endl;

    return 0;
}