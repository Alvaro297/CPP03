#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};




#endif // SCAVTRAP_HPP