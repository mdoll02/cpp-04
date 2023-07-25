/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:51:55 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:04:04 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>


Animal::Animal() : _type("Animal") {
	std::cout << "A new Animal was born!" << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
	std::cout << "A new Animal was born from another Animal!" << std::endl;
}

Animal::~Animal() {
	std::cout << "An Animal died!" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	this->_type = other._type;
	return *this;
}

std::string Animal::getType() const { return _type; }

void Animal::makeSound() const {
	std::cout << "Undefined Animal noises" << std::endl;
}
