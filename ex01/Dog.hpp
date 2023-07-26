/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:57:08 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 11:57:14 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
    Dog();
    Dog(const Dog& other);

    ~Dog();

    Dog& operator=(const Dog& other);

	void makeSound() const;

	std::string getIdea(int i) const;
	void setIdea(int i, std::string const &new_idea);

private:
	Brain *_brain;

};


#endif
