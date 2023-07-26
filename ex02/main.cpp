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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
	AAnimal *animals[10];

	//AAnimal shouldNotWork;

	int i = 0;
	while (i < 10) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}

	i = 0;
	while ( i < 10) {
		std::cout << "This is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		i++;
	}

	i = 0;
	while ( i < 10) {
		delete animals[i];
		i++;
	}

	std::cout <<"\n -------------------- Test for deep copy -------------------- \n" << std::endl;
	std::cout <<" ---------------------------- Cat ----------------------------- \n" << std::endl;

	Cat some_old_cat;
	Cat some_new_cat(some_old_cat);
	std::cout << "Idea at pos 42: " << some_old_cat.getIdea(42) << std::endl;
	std::cout << "New Idea at pos 42: Jump from fence" << std::endl;
	some_old_cat.setIdea(42, "Jump from fence");
	std::cout << "Idea at pos of old cat 42: " << some_old_cat.getIdea(42) << std::endl;
	std::cout << "Idea at pos of new cat 42: " << some_new_cat.getIdea(42) << std::endl;

	std::cout <<"\n ---------------------------- Dog ----------------------------- \n" << std::endl;

	Dog wolf;
	Dog collie = wolf;
	std::cout << "Idea of wolf at pos 69: " << wolf.getIdea(69) << std::endl;
	std::cout << "Idea of collie at pos 69: " << collie.getIdea(69) << std::endl;
	wolf.setIdea(69, "Bite the mailman");
	std::cout << "Idea of wolf at pos 69: " << wolf.getIdea(69) << std::endl;
	std::cout << "Idea of collie at pos 69: " << collie.getIdea(69) << std::endl;

	std::cout << "\n -------------------- Test for deep copy -------------------- \n" << std::endl;

	return 0;
}