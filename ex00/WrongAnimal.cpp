/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:50:06 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:53:25 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "A new WrongAnimal was born from another WrongAnimal!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "A WrongAnimal has died!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->_type = other._type;
	return *this;
}

std::string WrongAnimal::getType() const { return _type; }

void WrongAnimal::makeSound() const {
	std::cout << "Some wrong animal sounds" << std::endl;
}


