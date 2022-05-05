#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = "Default name";
	this->ad = 20;
	this->ep = 50;
	this->hp = 100;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->ad = 20;
	this->ep = 50;
	this->hp = 100;
	return ;
}

ScavTrap::ScavTrap(std::string name, int ad)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->ad = ad;
	this->ep = 50;
	this->hp = 100;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->ad = other.ad;
	this->hp = other.hp;
	this->ep = other.ep;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	*this = s;
}

void ScavTrap::attack(const std::string& target)
{
	if (ep <= 0 || hp <= 0)
		return ;
	std::cout << "ScavTrap " << name << " \e[1mattacks\e[0m " << target << " causing " << ad << " points of damage!" << std::endl;
	ep--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " switches to Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}
