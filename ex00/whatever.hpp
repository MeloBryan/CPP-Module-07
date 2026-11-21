/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:13:58 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/19 15:28:21 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T temp = y;
    y = x;
    x = temp;
}

template <typename T>
T const &min(T const &x, T const &y)
{
    return ((x < y) ? x : y);
}

template <typename T>
T const &max(T const &x, T const &y)
{
    return ((x > y) ? x : y);
}

#endif