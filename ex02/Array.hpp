/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:13:58 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/19 16:44:37 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array
{
    private :
        T *_elements;
        unsigned int _size;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array&operator=(const Array &copy);
        ~Array();

        T &operator[](unsigned int n);
        const T &operator[](unsigned int n) const;
        unsigned int size(void) const;
};

#include "Array.tpp"
#endif