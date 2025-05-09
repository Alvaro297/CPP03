#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap scravtrap("Scravvy");

	std::cout << "Initial state:" << std::endl;
	scravtrap.attack("target1");
	scravtrap.takeDamage(30);
	scravtrap.beRepaired(20);
	scravtrap.guardGate();

	std::cout << "\nAfter some actions:" << std::endl;
	scravtrap.attack("target2");
	scravtrap.takeDamage(50);
	scravtrap.beRepaired(10);
	scravtrap.guardGate();

	std::cout << "\nFinal state:" << std::endl;
	scravtrap.attack("target3");
	scravtrap.takeDamage(100);
	scravtrap.beRepaired(5);
	scravtrap.guardGate();

	return 0;
}