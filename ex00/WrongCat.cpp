/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:50:16 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 13:07:49 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "A new WrongCat was born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
	*this = other;
	std::cout << "A new WrongCat was born from another WrongCat!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "A WrongCat died!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	this->_type = other._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Bzz Bzz!" << std::endl;
}

