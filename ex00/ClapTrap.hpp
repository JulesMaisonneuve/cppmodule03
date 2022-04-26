#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hp;
		int ep;
		int ad;
	public:
		ClapTrap(void);
		ClapTrap(std::string name, int ad);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap setName(std::string name);
		~ClapTrap(void);
};

#endif