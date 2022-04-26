#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Joe("Joe", 2);
	ClapTrap Bill("Bill", 4);

	Joe.attack("Bill");
	Bill.takeDamage(2);
	Bill.attack("Joe");
	Joe.takeDamage(4);
	Joe.attack("Bill");
	Bill.takeDamage(2);
	Bill.attack("Joe");
	Joe.takeDamage(4);
	Bill.attack("Joe");
	Joe.takeDamage(4);
	Joe.attack("Bill");
	return (0);
}
