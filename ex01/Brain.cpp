/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:04:34 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/24 22:24:42 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other){
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.getIdea(i);
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const{
	return this->ideas[index];
}
