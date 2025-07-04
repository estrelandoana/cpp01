/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:31:16 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/03 22:49:25 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <str1> <str2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (!FileReplacer::replaceInFile(filename, str1, str2)) {
        std::cerr << "An error occurred during file replacement." << std::endl;
        return 1;
    }

    return 0;
}
