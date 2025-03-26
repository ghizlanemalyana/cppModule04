/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:41:36 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/26 19:41:48 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	int num = 2;
    AAnimal *animals[num];

	for (int i = 0; i < num; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}
    for (int i = 0; i < num ; i++)
        delete animals[i];
	return 0;
}