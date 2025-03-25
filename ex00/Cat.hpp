/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:54:20 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 17:24:16 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void makeSound() const;
	std::string getType() const;
};

#endif