#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Bill("Bill", 3);
	ScavTrap Joe("Joe", 4);
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Classic tests*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;

	Joe.attack("Bill");
	Bill.takeDamage(4);
	Bill.attack("Joe");
	Joe.takeDamage(3);
	Joe.attack("Bill");
	Bill.takeDamage(4);
	Bill.beRepaired(4);
	Joe.attack("Bill");
	Bill.takeDamage(4);
	std::cout << "\e[1mSpecial Capacity - \e[0m";
	Bill.guardGate();
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy assignement test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "Joe's hp before copy: " << Joe.getHp() << std::endl;
	Joe = Bill;
	std::cout << "Joe's hp after copy: " << Joe.getHp() << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Default constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	ScavTrap Jimmy;
	Jimmy.attack("Bill");
	Bill.takeDamage(20);
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	ScavTrap Dummy(Bill);
	std::cout << "Dummy's hp: " << Dummy.getHp() << std::endl;
	return (0);
}
