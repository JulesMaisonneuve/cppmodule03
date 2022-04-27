#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->ad = 30;
	this->ep = 100;
	this->hp = 100;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = name;
	this->ad = 30;
	this->ep = 100;
	this->hp = 100;
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Can I get a highfive?" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}
