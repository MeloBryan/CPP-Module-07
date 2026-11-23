/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:19:19 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/21 22:09:28 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
    char const arr[] = {'a', 'v'};
    std::size_t len = sizeof(arr) / sizeof(arr[0]);
    iter(arr, len, &print<int>);
    return (0);
}