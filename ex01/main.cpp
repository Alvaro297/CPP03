#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap scavtrap("Scavvy");

	std::cout << "Initial state:" << std::endl;
	scavtrap.attack("target1");
	scavtrap.takeDamage(30);
	scavtrap.beRepaired(20);
	scavtrap.guardGate();

	std::cout << "\nAfter some actions:" << std::endl;
	scavtrap.attack("target2");
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();

	std::cout << "\nFinal state:" << std::endl;
	scavtrap.attack("target3");
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();

	return 0;
}