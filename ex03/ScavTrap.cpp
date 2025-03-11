# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDmg = 20;
	std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor de ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDmg << " points of damage!" << std::endl;
			energyPoints--;
		}
		else
			std::cout << "ScavTrap " << name << " doesn't have energy points" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " can't attack because it has no hit points left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Guard of ScavTrap active" << std::endl;
}