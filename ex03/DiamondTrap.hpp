#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	using ScavTrap::attack;
	DiamondTrap(std::string name);
	~DiamondTrap();
	void whoAmI(void);
};

#endif