#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
private:
public:
	ScravTrap(std::string name);
	~ScravTrap();
	void attack(const std::string& target) override;
	void guardGate();
};




#endif // SCRAVTRAP_HPP