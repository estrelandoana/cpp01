/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:14:18 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/03 22:31:08 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

std::string replaceString(const std::string& line, const std::string& str1, const std::string& str2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(str1, pos)) != std::string::npos) {
        result += line.substr(pos, found - pos);
        result += str2;
        pos = found + str1.length();
    }

    result += line.substr(pos);
    return result;
}

bool FileReplacer::replaceInFile(const std::string& filename, const std::string& str1, const std::string& str2) {
    if (filename.empty() || str1.empty()) {
        std::cerr << "Error: filename and str1 must not be empty." << std::endl;
        return false;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Could not open file '" << filename << "'." << std::endl;
        return false;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Could not create output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceString(line, str1, str2) << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return true;
}
