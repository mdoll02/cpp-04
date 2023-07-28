/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:58:21 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:11:08 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "A new Cat was born!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
	*this = other;
	std::cout << "A new Cat was born from another Cat!" << std::endl;
}

Cat::~Cat() {
	std::cout << "A Cat died!" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MEOW!" << std::endl;
}

