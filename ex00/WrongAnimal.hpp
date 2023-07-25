/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:50:06 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 12:53:31 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);

    virtual ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& other);

	std::string getType() const;
	virtual void makeSound() const;


protected:
	std::string _type;

};



#endif
