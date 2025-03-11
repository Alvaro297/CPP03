#include "DiamondTrap.hpp"

int main() {
	// Crear un objeto DiamondTrap
	DiamondTrap diamond("Diamond Warrior");

	// Probar el ataque (heredado de FragTrap y ScavTrap)
	diamond.attack("enemy");

	// Usar el método whoAmI (específico de DiamondTrap)
	diamond.whoAmI();

	// Mostrar el estado de DiamondTrap
	std::cout << "DiamondTrap stats:" << std::endl;
	std::cout << "Hit points: " << diamond.getHitPoints() << std::endl;
	std::cout << "Energy points: " << diamond.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << diamond.getAttackDmg() << std::endl;

	return 0;
}