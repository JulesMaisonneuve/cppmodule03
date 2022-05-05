#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, int ad);
		ScavTrap(const ScavTrap &s);
		ScavTrap &operator=(const ScavTrap &other);
		void guardGate(void);
		void attack(const std::string& target);
		~ScavTrap(void);
};

#endif
