#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap(std::string name);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys();
};




#endif // FRAGTRAP_HPP