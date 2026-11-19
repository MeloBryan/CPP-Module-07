/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:19:19 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/19 16:51:35 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    Array<int> empty;
    std::cout << "Empty size: " << empty.size() << std::endl;
    try
    {
        std::cout << empty[0] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Empty access error: " << e.what() << std::endl;
    }
    Array<std::string> words(2);
    words[0] = "Bonjour";
    words[1] = "ca va ?";
    
    Array<std::string> copy(words);
    copy[1] = "Paris";
    
    std::cout << "Original [1]: " << words[1] << " | Copy [1]: " << copy[1] << std::endl;
    
    const Array<std::string> constArr(words);
    std::cout << "Const[0] : " << constArr[0] << std::endl;
    return (0);
}
