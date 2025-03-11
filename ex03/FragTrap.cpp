#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor de FragTrap" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			std::cout << "FragTrap " << name << " attacks " << target << " causing " << attackDmg << " points of damage!" << std::endl;
			energyPoints--;
		}
		else
			std::cout << "FragTrap " << name << " doesn't have energy points" << std::endl;
	}
	else
	std::cout << "FragTrap " << name << " can't attack because it has no hit points left" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High five guys (FragTrap method)" << std::endl;
}