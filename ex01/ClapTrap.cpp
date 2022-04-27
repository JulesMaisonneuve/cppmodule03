#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name, int ad)
{
	this->name = name;
	this->ad = ad;
	this->hp = 10;
	this->ep = 10;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (ep <= 0 || hp <= 0)
		return ;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << ad << " points of damage!" << std::endl;
	ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is now at " << hp << " health points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep <= 0 || hp <= 0)
		return ;
	std::cout << "ClapTrap " << name << " gains " << amount << " health points and is now at " << hp << " health points." << std::endl;
	ep--;
}	

ClapTrap ClapTrap::setName(std::string name)
{
	this->name = name;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
