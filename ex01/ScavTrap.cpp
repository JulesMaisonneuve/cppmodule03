#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->ad = 20;
	this->ep = 50;
	this->hp = 100;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = name;
	this->ad = 20;
	this->ep = 50;
	this->hp = 100;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (ep <= 0 || hp <= 0)
		return ;
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << ad << " points of damage!" << std::endl;
	ep--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap switches to Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}
