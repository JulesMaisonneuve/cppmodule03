#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Default name";
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
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = ad;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->ad = other.ad;
	this->hp = other.hp;
	this->ep = other.ep;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
}

int ClapTrap::getHp()
{
	return (this->hp);
}

void ClapTrap::attack(const std::string& target)
{
	if (ep <= 0 || hp <= 0)
		return ;
	std::cout << "ClapTrap " << name << " \e[1mattacks\e[0m " << target << " causing " <<  ad <<  " points of damage!" << std::endl;
	ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "ClapTrap " << name << " \e[1mtakes\e[0m " << amount << " points of damage and is now at " << hp << " health points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep <= 0 || hp <= 0)
		return ;
	hp += amount;
	std::cout << "ClapTrap " << name << " \e[1mgains\e[0m " << amount << " health points and is now at " << hp << " health points." << std::endl;
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
