#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Bill("Bill", 3);
	ClapTrap Joe("Joe", 4);
	ClapTrap Jimmy;
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
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy assignement test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "Joe's hp before copy: " << Joe.getHp() << std::endl;
	Joe = Bill;
	std::cout << "Joe's hp after copy: " << Joe.getHp() << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Default constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	Jimmy.attack("Bill");
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	ClapTrap Dummy(Bill);
	std::cout << "Dummy's hp: " << Dummy.getHp() << std::endl;
	return (0);
}
