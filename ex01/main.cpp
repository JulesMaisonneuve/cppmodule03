#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Billy("Billy");
	ClapTrap Johnny("Johnny");

	Billy.guardGate();
	Billy.attack("Johnny");
	Johnny.takeDamage(20);
	
	return (0);
}
