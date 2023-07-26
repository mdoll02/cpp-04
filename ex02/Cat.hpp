/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoll <mdoll@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:58:21 by mdoll             #+#    #+#             */
/*   Updated: 2023/07/25 11:58:41 by mdoll            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
public:
    Cat();
    Cat(const Cat& other);

    ~Cat();

    Cat& operator=(const Cat& other);

	void makeSound() const;

	std::string getIdea(int i) const;
	void setIdea(int i, std::string const &new_idea);

private:
	Brain *_brain;

};



#endif
