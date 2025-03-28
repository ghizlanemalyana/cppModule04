/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:04:34 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/26 17:57:19 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea";
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
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
