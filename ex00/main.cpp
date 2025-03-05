#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap claptrap("Benito");
	std::cout << "Initial state:" << std::endl;
	claptrap.attack("target1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	std::cout << "\nAfter some actions:" << std::endl;
	claptrap.attack("target2");
	claptrap.takeDamage(5);
	claptrap.beRepaired(4);
	std::cout << "\nFinal state:" << std::endl;
	claptrap.attack("target3");
	claptrap.takeDamage(10);
	claptrap.beRepaired(1);
	return (0);
}