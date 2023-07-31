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
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		this->_brain = new Brain();
		int i = 0;
		while (i < 100) {
			this->_brain->setIdea(i, other._brain->getIdea(i));
			i++;
		}
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WOOF!" << std::endl;
}

std::string Dog::getIdea(int i) const { return _brain->getIdea(i); }

void Dog::setIdea(int i, std::string const &new_idea) { _brain->setIdea(i, new_idea); }