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
	_brain = new Brain();
	std::cout << "A new Cat was born!" << std::endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << "A new Cat was born from another Cat!" << std::endl;
}

Cat::~Cat() {
	std::cout << "A Cat died!" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &other) {
	this->_type = other._type;
	this->_brain = new Brain();
	int i = 0;
	while (i < 100) {
		this->_brain->setIdea(i, other._brain->getIdea(i));
		i++;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MEOW!" << std::endl;
}

std::string Cat::getIdea(int i) const { return _brain->getIdea(i); }

void Cat::setIdea(int i, std::string const &new_idea) { _brain->setIdea(i, new_idea); }
