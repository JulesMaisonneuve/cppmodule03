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
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->ad = 30;
	this->ep = 100;
	this->hp = 100;
	return ;
}

FragTrap::FragTrap(std::string name, int ad)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->ad = ad;
	this->ep = 100;
	this->hp = 100;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->ad = other.ad;
	this->hp = other.hp;
	this->ep = other.ep;
    return *this;
}

FragTrap::FragTrap(const FragTrap &s)
{
	*this = s;
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
