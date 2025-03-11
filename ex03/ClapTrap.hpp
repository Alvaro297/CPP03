#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDmg;
public:
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	//Getters
	int ClapTrap::getHitPoints() const;
	int ClapTrap::getEnergyPoints() const;
	int ClapTrap::getAttackDmg() const;
};

#endif