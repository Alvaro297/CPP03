# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDmg = FragTrap::attackDmg;
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