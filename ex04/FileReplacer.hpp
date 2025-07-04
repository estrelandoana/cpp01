/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:06:05 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/03 22:21:25 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP
# include <iostream>
# include <string>
# include <fstream>

class FileReplacer{
    public:
        static bool replaceInFile(const std::string& filename, const std::string& str1, const std::string& str2);
};

#endif