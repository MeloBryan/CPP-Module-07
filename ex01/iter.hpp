/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:13:58 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/19 15:58:00 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

template <typename T>
void print(T const &x)
{
    std::cout << "Valeur : " << x << "\n";
}

template <typename T, typename Func>
void iter(T *array, std::size_t length, Func func)
{
    if (!array)
        return;
    for (std::size_t i=0;i<length;++i)
    {
        func(array[i]);
    }
}

#endif