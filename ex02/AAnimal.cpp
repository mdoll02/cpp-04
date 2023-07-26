/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:51:55 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:04:04 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>


AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "A new AAnimal was born!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	*this = other;
	std::cout << "A new AAnimal was born from another AAnimal!" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "An AAAnimal died!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	this->_type = other._type;
	return *this;
}

std::string AAnimal::getType() const { return _type; }

void AAnimal::makeSound() const {
	std::cout << "Undefined AAAnimal noises" << std::endl;
}
