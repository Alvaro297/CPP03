#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :energyPoints(10), hitPoints(10), attackDmg(0)
{
	this->name = name;
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << name << " has destroyed";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0)
	{
		if (this->energyPoints > 0)
		{
			std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDmg << " points of damage!" << std::endl;
			this->energyPoints--;
		}
		else
			std::cout << "ClapTrap " << this->name << " doesn't have energy points" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		this->hitPoints -= amount;
		if (this->hitPoints < 0)
			this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Remaining hit points: " << this->hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have live points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " health " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have energy points" << std::endl;
}

int ClapTrap::getHitPoints() const {
	return (hitPoints);
}

int ClapTrap::getEnergyPoints() const {
	return (energyPoints);
}

int ClapTrap::getAttackDmg() const {
	return (attackDmg);
}