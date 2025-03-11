# include "ScravTrap.hpp"

ScravTrap::ScravTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDmg = 20;
}

ScravTrap::~ScravTrap()
{
	std::cout << "Destructor de ScravTrap" << std::endl;
}

void ScravTrap::attack(const std::string &target)
{
	if (hitPoints > 0)
	{
		if (energyPoints > 0)
		{
			std::cout << "ScravTrap " << name << " attacks " << target << " causing " << attackDmg << " points of damage!" << std::endl;
			energyPoints--;
		}
		else
			std::cout << "ScravTrap " << name << " doesn't have energy points" << std::endl;
	}
	else
	std::cout << "ScravTrap " << name << " can't attack because it has no hit points left" << std::endl;
}

void ScravTrap::guardGate()
{
	std::cout << "Guard of ScravTrap active" << std::endl;
}