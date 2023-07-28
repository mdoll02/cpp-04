/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:57:08 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:11:25 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	_type = "Dog";
	std::cout << "A new Dog was born!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()  {
	*this = other;
	std::cout << "A new Dog was born from another Dog!" << std::endl;
}

Dog::~Dog() {
	std::cout << "A Dog died!" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->_type = other._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WOOF!" << std::endl;
}
