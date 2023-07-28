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
	_brain = new Brain();
	std::cout << "A new Dog was born!" << std::endl;
}

Dog::Dog(const Dog &other) :Animal() {
	*this = other;
	std::cout << "A new Dog was born from another Dog!" << std::endl;
}

Dog::~Dog() {
	std::cout << "A Dog died!" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &other) {
	this->_type = other._type;
	this->_brain = new Brain();
	int i = 0;
	while (i < 100) {
		this->_brain->setIdea(i, other._brain->getIdea(i));
		i++;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WOOF!" << std::endl;
}

std::string Dog::getIdea(int i) const { return _brain->getIdea(i); }

void Dog::setIdea(int i, std::string const &new_idea) { _brain->setIdea(i, new_idea); }