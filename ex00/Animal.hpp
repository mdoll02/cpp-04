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

class Animal {
public:
    Animal();
	Animal(const Animal& other);

    ~Animal();

    Animal& operator=(const Animal& other);

private:

protected:
	std::string _type;
};



#endif
