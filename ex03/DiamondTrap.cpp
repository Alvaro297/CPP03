# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	FragTrap::hitPoints;
	ScavTrap::energyPoints;
	FragTrap::attackDmg;
	std::cout << "DiamondTrap " << name << " created!" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "The diamondName is " << name << " the ClapTrap name is: " << ClapTrap::name << std::endl;
}