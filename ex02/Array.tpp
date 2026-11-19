/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:42:04 by bmelo             #+#    #+#             */
/*   Updated: 2026/11/19 16:44:01 by bmelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other) : _elements(NULL), _size(0) {
    *this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy) {
    if (this != &copy) {
        delete[] _elements;
        _size = copy._size;
        _elements = (_size > 0) ? new T[_size] : NULL;
        for (unsigned int i = 0; i < _size; i++) {
            _elements[i] = copy._elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int n) {
    if (n >= _size)
        throw std::out_of_range("Index out of bounds");
    return _elements[n];
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const {
    if (n >= _size)
        throw std::out_of_range("Index out of bounds");
    return _elements[n];
}

template <typename T>
unsigned int Array<T>::size(void) const {
    return _size;
}

#endif
