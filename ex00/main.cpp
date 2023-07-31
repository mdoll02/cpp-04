/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:21:45 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:21:48 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " ";
		j->makeSound();
		std::cout << i->getType() << " ";
		i->makeSound();

		meta->makeSound();


		delete meta;
		delete j;
		delete i;
	}
	{
		WrongCat cat;

		std::cout << "WrongCat\n";
		cat.makeSound();


		WrongAnimal* animalus = NULL;

		animalus = new WrongCat();
		std::cout << "WrongAnimal\n";
		animalus->makeSound();

		delete animalus;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << std::endl;
		i->makeSound();
		meta->makeSound();


		delete meta;
		delete i;
	}

	return 0;
}