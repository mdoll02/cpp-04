/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:51:55 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 11:52:00 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal {
public:
    AAnimal();
	AAnimal(const AAnimal& other);

    virtual ~AAnimal();

    AAnimal& operator=(const AAnimal& other);

	std::string getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string _type;
};



#endif
